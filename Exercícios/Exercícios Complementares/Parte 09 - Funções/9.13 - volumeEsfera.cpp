#include <iostream>
#include <cmath>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float volume (float r) {
	float vol = (4 * 3.14 * (r * r * r)) / 3;
	return (vol);
}

int main() {
	float r, v;
	
	//Cabecalho
    cabecalho();
		
	cout << "Digite o raio da esfera: ";
	cin >> r;
		
	v = volume(r);
		
	cout << "\nO volume da esfera e: " << v;
}
