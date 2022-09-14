// Escreva um programa que leia um número na base decimal e em seguida imprima esse mesmo número nas bases octal e hexadecimal.


#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int num, numOctal, numHexa;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite um numero em base decimal: ";
    cin >> num;   

    // Apresentação dos resultados
    cout << "\n\nNumero " << num << " na base octal: " << std::oct << num;
    cout << "\nNumero "  << std::dec << num << " na base hexadecimal: " << std::hex << num;
}