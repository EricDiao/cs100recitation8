//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#include <iostream>
#include "TestClass.hpp"

TestClass::TestClass() {
    std::cout << "dummy object is created\n";
}

TestClass::~TestClass() {
    std::cout << "dummy object is destroyed\n";
}

void TestClass::printSomething() {
    std::cout << "hello\n";
}
