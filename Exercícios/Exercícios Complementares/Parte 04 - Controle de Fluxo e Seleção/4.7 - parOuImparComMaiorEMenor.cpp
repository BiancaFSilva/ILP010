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
            cout << "\nEsse numero e menor que 50";
        } 
    } else {
        cout << "\n\nO numero " << n << " e par";

        if (n > 15) {
            cout << "\nEsse numero e maior que 15";
        } 
    }
}