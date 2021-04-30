#include "CheesePizza.hpp"
#include <iostream>

CheesePizza::CheesePizza(IngredientFactory ingredientSource) {
    ingredients = ingredientSource;
}

CheesePizza::~CheesePizza() {}

void CheesePizza::preparePizza() {
    std::cout << "Preparing " << name << "..." << std::endl;
    dough = ingredients.getDough();
    cheese = ingredients.getCheese();
    sauce = ingredients.getSauce();
}