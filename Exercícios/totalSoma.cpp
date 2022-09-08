// Faça um programa que apresente o total da soma obtido dos cem primeiros números inteiros. (1+2+3+4+......+100)

#include <iostream>
using namespace std;

int main() {
    int soma = 0; 
    
    for (int i = 1; i < 100; i++) {
        soma += i;
        cout << soma << "\n";
    }
    cout << "A soma entre os numeros de 1 a 100 e: " << soma;
}