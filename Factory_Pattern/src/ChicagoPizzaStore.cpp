#include "ChicagoPizzaStore.hpp"
#include "ChicagoIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "MeatPizza.hpp"
#include <iostream>

ChicagoPizzaStore::~ChicagoPizzaStore() {}

Pizza* ChicagoPizzaStore::createPizza(void) {
    IngredientFactory *ingredients = new ChicagoIngredientFactory();
    Pizza *pizza = NULL;
    if (currentOrder == "cheese") {
        pizza = new CheesePizza(*ingredients);
        pizza->setPizzaName("Chicago Cheese Pizza");
    } else if (currentOrder == "veggie") {
        std::cout << "Ordered VeggiePizza" << std::endl;
    } else if (currentOrder == "seafood") {
        std::cout << "Ordered Clam" << std::endl;
    } else if (currentOrder == "meat") {
        pizza = new MeatPizza(*ingredients);
        pizza->setPizzaName("Chicago Meat Pizza");
    } else {
        std::cout << "Order is invalid!" << std::endl;
    }

    if (pizza) {
        pizza->preparePizza();
        pizza->bakePizza();
        pizza->cutPizza();
        pizza->boxPizza();
    }

    return pizza;
}