/*
Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
VOLUME = 3.14159 * R2 * ALTURA.
*/

#include <iostream>
using namespace std;

int main() {
    int volume, raio, altura;

    cout << "Informe a altura da lata: ";
    cin >> altura;
    cout << "Informe o raio da lata: ";
    cin >> raio;

    volume = 3.14159 * (raio * raio) * altura;

    cout << "O volume de oleo da lata e: " << volume;
}