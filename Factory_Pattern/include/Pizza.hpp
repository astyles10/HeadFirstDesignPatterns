#pragma once
#include "IngredientFactory.hpp"

class Pizza {
protected:
    IngredientFactory ingredients;
public:
    // Properties
    std::string name;
    std::string dough;
    std::string sauce;
    std::string cheese;
    std::string seafood;
    std::string meat;
    std::string vegetables;

    ~Pizza();

    // Virtual Functions
    virtual void preparePizza() = 0;

    // Static Functions
    virtual void bakePizza(void);
    virtual void cutPizza(void);
    virtual void boxPizza(void);
    void setPizzaName(std::string);
    std::string getPizzaName(void);
};