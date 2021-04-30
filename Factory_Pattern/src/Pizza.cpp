#include "Pizza.hpp"
#include <iostream>

Pizza::~Pizza() {}

void Pizza::bakePizza() {
    std::cout << "Baking pizza for 25 mins at 180deg..." << std::endl;
}

void Pizza::cutPizza() {
    std::cout << "Cutting pizza into diagonal slices..." << std::endl;
}

void Pizza::boxPizza() {
    std::cout << "Placing pizza into official PizzaStore(TM) box" << std::endl;
}

void Pizza::setPizzaName(std::string inName) {
    name = inName;
}

std::string Pizza::getPizzaName(void) {
    return name;
}