/*
Faça um programa que leia dois valores e informe a média entre eles. 
- use float como tipo de dado.
*/
#include <iostream>
using namespace std;

int main() {
    float n1, n2, media;
    
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    media = (n1 + n2) / 2;

    cout << "A media e: " << media;
    return 0;
}