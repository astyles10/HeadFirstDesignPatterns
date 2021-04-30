#pragma once
#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
    virtual ~NYPizzaStore();
    virtual Pizza* createPizza(void);
};