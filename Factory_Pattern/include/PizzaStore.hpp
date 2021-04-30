#pragma once
#include <string>
#include "Pizza.hpp"

class PizzaStore {
public:
    ~PizzaStore();
    virtual void takeOrder(std::string);
    virtual Pizza* createPizza(void) = 0;

    std::string currentOrder;
};