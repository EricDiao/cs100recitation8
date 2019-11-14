//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#include "MyVector.hpp"

MyVector::MyVector() = default;

MyVector::~MyVector() = default;

double &MyVector::at(int index) {
    return m_data.at(index);
}

const double &MyVector::at(int index) const {
    return m_data.at(index);
}

void MyVector::clear() {
    m_data.clear();
}

int MyVector::size() const {
    return m_data.size();
}

MyVector &MyVector::push_back(double val) {
    m_data.push_back(val);
    return *this;
}

// TODO implement stream insertion operator
