// Faça um programa que receba um número inteiro e que verifique se esse número é par ou se é ímpar. O programa deve informar ao usuário o número apenas se for par e maior que 15 e se for ímpar apenas se for menor que 50. 

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
    if ((n % 2 == 1) && (n < 50)) {
        cout << "\n\nO numero " << n << " e impar";
    } else if ((n % 2 == 0) && (n > 15)) {
        cout << "\n\nO numero " << n << " e par";          
    }
}