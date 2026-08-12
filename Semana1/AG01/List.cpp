//
// Created by Aarón Escobar on 11/08/26.
//
#include <iostream>

using namespace std;

const int MAX = 100;

class Lista {
private:
    int data[MAX];
    int size;

public:
    Lista() {
        size = 0;
    };

    void insert(int value) {
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


    int getData(int pos) const {
        return data[pos];
    }

    // usamos el const para no modificar la estructura dentro
    int getSize() const {
        return size;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << "[" << i << "]" << data[i] << endl;
        }
    }

};


int main() {
    Lista lista;

    lista.insert(154);
    lista.insert(587);
    lista.insert(874);

    lista.print();

}
