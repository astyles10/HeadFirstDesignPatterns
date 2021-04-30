#pragma once
#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore {
    virtual ~ChicagoPizzaStore();
    virtual Pizza* createPizza(void);
};