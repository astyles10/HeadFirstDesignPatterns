#pragma once
#include "Pizza.hpp"
#include "IngredientFactory.hpp"

class MeatPizza : public Pizza {
public:
    MeatPizza(IngredientFactory ingredientSource);
    ~MeatPizza();
    void preparePizza();
};