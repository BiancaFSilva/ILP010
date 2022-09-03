// Faça um programa que leia 15 valores e informe o valor da diferença entre a média eo maior valor

#include <iostream>
using namespace std;

int main() {
    float num, maior, soma, diferenca, media;

    for (int i = 0; i < 15; i++) {
        cout << "Digite um numero: ";
        cin >> num;

        if (i == 1) {
            maior = num;
        } else if (num > maior) {
            maior = num;
        }

        soma = soma + num;
    }

    media = soma / 15;
    diferenca = media - maior; 

    cout << "A media entre os 15 valores digitados e " << media;
    cout << "A diferenca entre o maior numero (" << maior << ") e a media e de " << diferenca;
}