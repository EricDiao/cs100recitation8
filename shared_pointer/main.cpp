//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#include <iostream>
#include "SharedPointer.hpp"
#include "TestClass.hpp"

int main() {
    int indexA = 1;
    int indexB = 1;
    if (indexA == 1) {
        std::cout << "Entering scope A\n";
        SharedPointer<TestClass> ptrA;
        if (indexB == 1) {
            std::cout << "Entering scope B\n";
            SharedPointer<TestClass> ptrB(new TestClass());
            ptrA = ptrB;
        }
        std::cout << "Returning to scope A\n";
    }
    std::cout << "Returning to global scope\n";
    return 0;
}
