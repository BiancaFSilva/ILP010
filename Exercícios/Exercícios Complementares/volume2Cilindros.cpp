
#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int r, h;
    float v, v1;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe o raio da base do primeiro cilindro: ";
    cin >> r;
    cout << "Informe a altura do primeiro cilindro: ";
    cin >> h;
    v = (3.14* ((r * r) * h));

    cout << "Informe o raio da base do segundo cilindro: ";
    cin >> r;
    cout << "Informe a altura do segundo cilindro: ";
    cin >> h;
    v1 = (3.14* ((r * r) * h));

    // Apresentação dos resultados 
    cout << "\n\nO volume do primeiro cilindro e de " << v;
    cout << "\nO volume do segundo cilindro e de " << v1;

    if (v > v1) {
        cout << "\n\nO volume do primeiro cilindro e maior que o do segundo cilindro" << v;
    } else if (v < v1) {
        cout << "\n\nO volume do segundo cilindro e maior que o do primeiro cilindro" << v;
    } else {
        cout << "\n\nOs volumes dos cilindros sao equivalentes" << v;
    }
}