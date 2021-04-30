#include "IngredientFactory.hpp"
#include <iostream>
IngredientFactory::~IngredientFactory() {}

std::string IngredientFactory::getDough() {
    std::cout << "Adding " << dough << "..." << std::endl;
    return dough;
}

std::string IngredientFactory::getSauce() {
    std::cout << "Adding " << sauce << "..." << std::endl;
    return sauce;
}

std::string IngredientFactory::getCheese() {
    std::cout << "Adding " << cheese << "..." << std::endl;
    return cheese;
}

std::string IngredientFactory::getSeafood() {
    std::cout << "Adding " << seafood << "..." << std::endl;
    return seafood;
}

std::string IngredientFactory::getMeat() {
    std::cout << "Adding " << meat << "..." << std::endl;
    return meat;
}

std::string IngredientFactory::getVegetables() {
    std::cout << "Adding " << vegetables << "..." << std::endl;
    return vegetables;
}