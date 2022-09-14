/*  Escreva um programa que solicite ao usuário dois números inteiros diferentes de zero. 
    Com esses números imprima na tela: a soma, a subtração, o produto, a divisão e a média. */


#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int num1, num2;
    float media;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite um numero diferente de zero: ";
    cin >> num1;
    cout << "Digite outro numero diferente de zero: ";
    cin >> num2;

    media = (num1 + num2) / 2;

    // Apresentação dos resultados
    cout << "\n\nResultados das operacoes\n";
    cout << "\n\t" << num1 << " + " << num2 << " = " << (num1 + num2);
    cout << "\n\t" << num1 << " - " << num2 << " = " << (num1 - num2);
    cout << "\n\t" << num1 << " x " << num2 << " = " << (num1 * num2);
    cout << "\n\t" << num1 << " : " << num2 << " = " << (num1 / num2);
    cout << "\n\nA media entre " << num1 << " e " << num2 << " e igual a " << media;
}