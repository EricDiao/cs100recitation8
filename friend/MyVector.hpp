//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#ifndef RECITATION8_MYVECTOR_HPP
#define RECITATION8_MYVECTOR_HPP

#include <vector>

class MyVector {
public:
    MyVector();
    virtual ~MyVector();

    double &at(int index);
    const double &at(int index) const;

    void clear();
    int size() const;
    MyVector &push_back(double val);

    // TODO add stream insertion operator
private:
    std::vector<double> m_data;
};


#endif //RECITATION8_MYVECTOR_HPP
