#include <iostream>
#include <singleton.hpp>

Singleton::Singleton(std::string inName) {
    name = inName;
    std::cout << "Singleton created with name: " << name << std::endl;
}

Singleton::~Singleton() {}

Singleton* Singleton::getInstance(std::string inName) {
    if (mySingleton == nullptr) {
        mySingleton = new Singleton(inName);
        return mySingleton;
    } else {
        std::cout << "Singleton already created, unable to instantiate " << inName << std::endl;
        return NULL;
    }
}

void Singleton::printName(void) {
    std::cout << name << std::endl;
}

void Singleton::setData(int inData) {
    data = inData;
}

int Singleton::getData(void) {
    std::cout << "getData: " << data << std::endl;
    return data;
}