//
// Created by Aarón Escobar on 14/08/26.
//
#pragma once

using namespace std;
#include <iostream>

const int MAX = 100;

template <class T>
class ListT {
public:
    ListT();

    void insert(T value) {
        if (size < MAX) {
            data[size] = value;
            size++;
        } else {
            std::cout << "Not enough spaces" << std::endl;
        }
    }

    void erase() {
        if (size > 0) {
            std::cout << data[size - 1] << std::endl;
        }
    }

    T getData(int pose) const{
        return data[pose];
    }

    int getSize() const {
        return size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << "[" << i << "]" << data[i] << endl;
        }
    }

private:
    T data[MAX];
    int size;

};
