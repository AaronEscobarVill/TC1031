//
// Created by Aarón Escobar on 14/08/26.
//
#pragma once

#include <iostream>

const int MAX = 100;

template <typename T>
class ListaT {
private:
    T data[MAX];
    int size;

public:
    ListaT() : size(0) {}

    void insert(T value) {
        if (size < MAX) {
            data[size] = value;
            size++;
        } else {
            std::cout << "Not enough space" << std::endl;
        }
    }

    void erase() {
        if (size > 0) {
            std::cout << "Removed: " << data[size - 1] << std::endl;
            size--;
        } else {
            std::cout << "No elements to remove" << std::endl;
        }
    }

    // Función getData
    T getData(int pos) const {
        return data[pos];
    }

    // Función getSize
    int getSize() const {
        return size;
    }

    // Función print
    void print() const {
        for (int i = 0; i < size; i++) {
            std::cout << "[" << i << "] - " << getData(i) << std::endl;
        }
    }
};
