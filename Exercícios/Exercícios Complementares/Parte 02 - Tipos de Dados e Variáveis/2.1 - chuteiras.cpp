#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int marcaA, marcaB, marcaC;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite a quantidade de chuteiras disponiveis da marca (A): ";
    cin >> marcaA;
    cout << "Digite a quantidade de chuteiras disponiveis da marca (B): ";
    cin >> marcaB;
    cout << "Digite a quantidade de chuteiras disponiveis da marca (C): ";
    cin >> marcaC;

    // Apresentação dos resultados
    cout << "\n\nQuantidade de chuteiras em estoque\n";
    cout << "\n\tMarca <A)\tMarca (B)\tMarca (C)";
    cout << "\n\t   " << marcaA << "\t\t   " << marcaB << "\t\t   " << marcaC;
}