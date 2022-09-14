// Escreva um programa que solicite ao usuário um número inteiro e imprima a tabuada de multiplicação desse número até 6, sendo que o comando da operação de multiplicação deve ser usado dentro do printf.

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int num, resp;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 1; i <= 6; i++) {
        resp = num * i;

        // Apresentação dos resultados        
        cout << "\n\t" << num << " x " << i << " = " << resp;
    }    
}