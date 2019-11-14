//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#include <iostream>
#include <cmath>
#include "MyVector.hpp"

int main() {
    MyVector vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(std::sqrt(i));
    }
    std::cout << vec << std::endl;
}
