#include "MeatPizza.hpp"
#include <iostream>

MeatPizza::MeatPizza(IngredientFactory ingredientSource) {
    ingredients = ingredientSource;
}

MeatPizza::~MeatPizza() {}

void MeatPizza::preparePizza() {
    std::cout << "Preparing " << name << "..." << std::endl;
    dough = ingredients.getDough();
    cheese = ingredients.getCheese();
    meat = ingredients.getMeat();
    sauce = ingredients.getSauce();
}