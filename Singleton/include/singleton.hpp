#pragma once
#include <string>

class Singleton {
private:
    static Singleton *mySingleton;
    std::string name;
    int data = 0;
    Singleton(std::string);
    ~Singleton();
public:
    static Singleton* getInstance(std::string);
    void printName(void);
    void setData (int);
    int getData (void);
};