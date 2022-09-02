/*
Faça um programa que leia 5 valores e informe o valor do maior.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, maior;

    cout << "Informe um numero: ";
    cin >> n1;
    cout << "Informe um numero: ";
    cin >> n2;
    cout << "Informe um numero: ";
    cin >> n3;
    cout << "Informe um numero: ";
    cin >> n4;
    cout << "Informe um numero: ";
    cin >> n5;

    cout << "O maior numero informado foi: " << max(n1, n2, n3, n4, n5);
    
    return 0;
}