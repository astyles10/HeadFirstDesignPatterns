#include "singleton.hpp"
#include <thread>
#include <iostream>
#include <mutex>

Singleton *Singleton::mySingleton = 0;
std::mutex mtx;

void singThreads(int thrNo) {
    mtx.lock();
    std::cout << "Thread: " << thrNo << std::endl;
    Singleton *sing = sing->getInstance("kekw");

    if (sing) {
        sing->setData(thrNo);
        std::cout << "Thread data: " << sing->getData() << std::endl;
    }

    mtx.unlock();
}

int main (void) {

    std::thread first(singThreads, 73);
    std::thread second(singThreads, 69);

    first.join();
    second.join();

    return 0;
}