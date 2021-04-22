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
    virtual std::string getDough();
    virtual std::string getSauce();
    virtual std::string getCheese();
    virtual std::string getSeafood();
    virtual std::string getMeat();
    virtual std::string getVegetables();
};