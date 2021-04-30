#include "NYPizzaStore.hpp"
#include "NYIngredientFactory.hpp"
#include "CheesePizza.hpp"
#include "MeatPizza.hpp"
#include <iostream>

NYPizzaStore::~NYPizzaStore() {}

Pizza* NYPizzaStore::createPizza(void) {
    IngredientFactory *ingredients = new NYIngredientFactory();
    Pizza *pizza = NULL;
    if (currentOrder == "cheese") {
        pizza = new CheesePizza(*ingredients);
        pizza->setPizzaName("New Yorkian Cheese Pizza");
    } else if (currentOrder == "veggie") {
        std::cout << "Ordered VeggiePizza" << std::endl;
    } else if (currentOrder == "seafood") {
        std::cout << "Ordered Clam" << std::endl;
    } else if (currentOrder == "meat") {
        pizza = new MeatPizza(*ingredients);
        pizza->setPizzaName("New Yorkian Meat Pizza");
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