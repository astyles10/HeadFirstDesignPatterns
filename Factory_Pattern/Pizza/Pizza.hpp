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

    // Virtual Functions
    virtual void preparePizza() = 0;

    // Static Functions
    void bakePizza(void);
    void cutPizza(void);
    void boxPizza(void);
    void setPizzaName(std::string);
    std::string getPizzaName(void);
    Pizza deliverPizza();
};