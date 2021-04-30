#include "PizzaStore.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include <iostream>
#include <vector>

int main (void) {
    PizzaStore *nyPizzaPlace = new NYPizzaStore();

    nyPizzaPlace->takeOrder("cheese");
    Pizza *DavesOrder = nyPizzaPlace->createPizza();
    std::cout << "Dave-o order of " << DavesOrder->name << " is complete !\n";

    PizzaStore *chicagoPizzaJoint = new ChicagoPizzaStore();
    chicagoPizzaJoint->takeOrder("meat");
    Pizza *EthansOrder = chicagoPizzaJoint->createPizza();
    std::cout << "Ethan order of " << EthansOrder->name << " is complete !\n";

    std::vector<Pizza*> JohnnosOrder;
    nyPizzaPlace->takeOrder("meat");
    chicagoPizzaJoint->takeOrder("cheese");
    JohnnosOrder.push_back(chicagoPizzaJoint->createPizza());
    JohnnosOrder.push_back(nyPizzaPlace->createPizza());

    for (auto order = JohnnosOrder.begin(); order != JohnnosOrder.end(); order++) {
        std::cout << "Johnno order of " << (*order)->name << " is complete !\n";
    }

    return 0;
}