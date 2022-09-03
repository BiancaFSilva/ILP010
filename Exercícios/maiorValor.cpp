// Faça um programa que leia 5 valores e informe o valor do maior.

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

    if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)) {
        maior = n1;
    } else if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)) {
        maior = n2;
    } else if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5)) {
        maior = n3;
    } else if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5)) {
        maior = n4;
    } else {
        maior = n5;
    }    

    cout << "O maior numero informado foi: " << maior;
}