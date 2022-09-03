/* Faça um programa que leia uma temperatura em graus Centígrados e apresente-a
convertida em graus Fahrenheit. 
A fórmula de conversão é:
    F = (9 * C + 160) / 5       */

#include <iostream>
using namespace std;

int main() {
    int c, f;

    cout << "Informe a temperatura em graus Celsius: ";
    cin >> c;

    f = (9 * c + 160) / 5;

    cout << "A temperatura convertida para Fahrenheit e: " << f;
}