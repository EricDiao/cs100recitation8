//
// Created by llk89 on 2019/11/14.
// Copyright (c) 2019 llk89 All rights reserved.
//

#include "SharedPointer.hpp"
#include "SharedPointerController.hpp"
template<class T>
SharedPointer<T>::SharedPointer()
: m_ptr(nullptr), m_controller() {}

template<class T>
SharedPointer<T>::SharedPointer(T *ptr)
: m_ptr(ptr), m_controller() {}

template<class T>
SharedPointer<T>::SharedPointer(const SharedPointer &ptr)
: m_ptr(ptr.m_ptr), m_controller(ptr.m_controller) {
    // maybe you need to do something here?
}

template<class T>
SharedPointer<T>::~SharedPointer() {
    // TODO somehow clean up
}

template<class T>
SharedPointer<T> &SharedPointer<T>::operator=(const SharedPointer &ptr) {
    m_ptr = ptr.m_ptr;
    m_controller = ptr.m_controller;
    // maybe you need to do something here?
    return *this;
}

template<class T>
T *SharedPointer<T>::get() {
    return m_ptr;
}

template<class T>
T &SharedPointer<T>::operator*() {
    return m_ptr;
}

template<class T>
T *SharedPointer<T>::operator->() {
    return m_ptr;
}
