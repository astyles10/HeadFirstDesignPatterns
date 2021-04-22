#include "Pizza.hpp"
#include "IngredientFactory.hpp"

class CheesePizza : public Pizza {
public:
    CheesePizza(IngredientFactory ingredientSource);
    ~CheesePizza();
    void preparePizza();
};