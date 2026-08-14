//
// Created by Aarón Escobar on 14/08/26.
//

#include "ListT.h"

int main() {
    ListT<int> lista;

    lista.insert(154);
    lista.insert(587);
    lista.insert(874);

    lista.print();
    return 0;
}