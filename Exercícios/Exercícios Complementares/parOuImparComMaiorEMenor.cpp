/*  Faça um programa que receba um número inteiro e que verifique se esse número é par ou ímpar. O programa deve informar:
    • se o número é par, caso afirmativo informar também se ele é maior que 15
    • se o número é ímpar, caso afirmativo se ele é menor que 50  */

#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int n;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero inteiro: ";
    cin >> n;

    // Apresentação dos resultados 
    if (n % 2 == 1) {
        cout << "\n\nO numero " << n << " e impar";

        if (n < 50) {
            cout << "Esse numero e maior que 15";
        } 
    } else {
        cout << "\n\nO numero " << n << " e par";

        if (n > 15) {
            cout << "Esse numero e maior que 15";
        } 
    }
}