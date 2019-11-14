//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#ifndef RECITATION8_SHAREDPOINTER_HPP
#define RECITATION8_SHAREDPOINTER_HPP

class SharedPointerController;

template<class T>
class SharedPointer {
public:
    SharedPointer();
    SharedPointer(T *ptr);
    SharedPointer(const SharedPointer &ptr);
    virtual ~SharedPointer();

    T *get();
    T &operator*();
    T *operator->();
    SharedPointer &operator=(const SharedPointer &ptr);

private:
    T *m_ptr;
    SharedPointerController *m_controller;
};


#endif //RECITATION8_SHAREDPOINTER_HPP
