//
// Created by Aarón Escobar on 14/08/26.
//

#include <iostream>
#include "ListT.h"

using namespace std;

int main() {
    ListaT<int> listInt;

    listInt.insert(154);
    listInt.insert(587);
    listInt.insert(874);

    cout << "List Content" << endl;
    listInt.print();

    cout << "\nErase function" << endl;
    listInt.erase();

    cout << "\nList Content" << endl;
    listInt.print();

    ListaT<string> listS;

    listS.insert("Prueba 1");
    listS.insert("Prueba 2");
    listS.insert("Prueba 3");

    cout << "List Content" << endl;
    listS.print();

    cout << "\nErase function" << endl;
    listS.erase();

    cout << "\nList Content" << endl;
    listS.print();

    return 0;
}
