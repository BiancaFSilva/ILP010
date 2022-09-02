/*
Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 1) {
            cout << i << "\n";
        }
    }
}