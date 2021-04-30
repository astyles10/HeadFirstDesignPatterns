#pragma once
#include <string>

class IngredientFactory {
protected:
    std::string dough;
    std::string sauce;
    std::string cheese;
    std::string seafood;
    std::string meat;
    std::string vegetables;
public:
    ~IngredientFactory();
    std::string getDough();
    std::string getSauce();
    std::string getCheese();
    std::string getSeafood();
    std::string getMeat();
    std::string getVegetables();
};
