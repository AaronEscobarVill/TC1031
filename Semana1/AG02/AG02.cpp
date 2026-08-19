//
// Created by Aarón Escobar on 14/08/26.
//

using namespace std;
#include <iostream>
#include <utility>

int fibonacci_recursivo(int n) {
    if (n < 3){
        return 1;
    }
    else {
        return fibonacci_recursivo(n-2) + fibonacci_recursivo(n-1);
    }
}

int fibonacci_iterativo(int n) {
    int out = 1;
    int dummy = 0;
    for (int i = 0; i<n; i++) {
        dummy = out;
        out+=dummy;
    }
    return out;
}

void runFibonacci() {
    int n = 0;
    cout << "Enter number: ";
    cin >> n;
    cout << fibonacci_recursivo(n) << endl;
}

void runFibonacciIterativo() {
    int n = 0;
    cout << "Enter number: ";
    cin >> n;
    cout << fibonacci_iterativo(n) << endl;
}

double inversion_recursivo(double initial, int n) {
    if (n<=0) {
        return initial;
    }
    else if (n<2) {
        return initial + initial*0.1875;
    }
    else {
        return inversion_recursivo(initial, n-1) + inversion_recursivo(initial,n-1)*0.1875;
    }
}

double inversion_iterativo(double initial, int n) {
    for (int i = 0; i<n; i++) {
        initial *= 1.1875;
    }
    return initial;
}

void run_inversion_recursivo() {
    double initial = 0;
    int n = 0;
    cout << "Enter initial value: ";
    cin >> initial;
    cout << "\nEnter number of months: ";
    cin >> n;
    cout << inversion_recursivo(initial, n) << endl;
}

void run_inversion_iterativo() {
    double initial = 0;
    int n = 0;
    cout << "Enter initial value: ";
    cin >> initial;
    cout << "\nEnter number of months: ";
    cin >> n;
    cout << inversion_iterativo(initial, n) << endl;
}

double potencia_recursivo(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent == 1){ return base;}
    else {
        return potencia_recursivo(base, exponent-1) * base;
    }
}

double potencia_itertivo(double base, int exponent) {
    double out = 1;
    if (exponent >= 1){
        for (int i = 0; i < exponent; i++) {
            out *= base;
        }
    }
    return out;
}

void run_potenica_recursivo() {
    double base = 0;
    int expo = 0;
    cout << "Enter base value: ";
    cin >> base;
    cout << "\nEnter exponent: ";
    cin >> expo;
    cout << potencia_recursivo(base, expo) << endl;
}

void run_potencia_iterativo() {
    double base = 0;
    int expo = 0;
    cout << "Enter base value: ";
    cin >> base;
    cout << "\nEnter exponent: ";
    cin >> expo;
    cout << potencia_itertivo(base, expo) << endl;
}

int main() {
    cout << potencia_itertivo(2, 2) << endl;
    return 0;
}