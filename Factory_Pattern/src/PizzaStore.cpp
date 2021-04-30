#include "PizzaStore.hpp"

PizzaStore::~PizzaStore() {}

void PizzaStore::takeOrder(std::string pizzaName) {
    currentOrder = pizzaName;
}