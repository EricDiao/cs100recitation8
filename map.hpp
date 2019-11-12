//
// Created by llk89 on 2019/11/12.
// Copyright (c) 2019 llk89 All rights reserved.
//

#ifndef RECITATION8_MAP_HPP
#define RECITATION8_MAP_HPP

#include <ostream>

template<class Key, class Element>
class map {
public:
    class iterator {
    public:
        iterator();

        iterator operator++();

        std::pair<Key, Element> operator*();
    };

    // constructors
    map();

    map(map other);

    explicit map(int initial_capacity);

    virtual ~map();

    // status query
    bool isEmpty();

    int size();

    // iterators
    iterator begin();

    iterator end();

    // removal
    void erase(Key k);

    void clear();

    // operators
    std::ostream operator<<(std::ostream os, map map);

    // imagine how this should be implemented
    Element operator[](Key key);
};


#endif //RECITATION8_MAP_HPP
