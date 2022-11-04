#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float imcMulher (float h) {
	float p = 62.1 * h - 44.7;
	cout << "\nO peso ideal e: " << p;
}

float imcHomem (float h) {
	float p = 72.7 * h - 58;
	cout << "\nO peso ideal e: " << p;
}

int main() {
	float alt;
	char s;
	
	//Cabecalho
    cabecalho();
		
	cout << "Informe o sexo da pessoa: (M - masculino; F - feminino) ";
	cin >> s;
	cout << "Informe a altura: ";
	cin >> alt;
		
	if (s == 'F' || s == 'f') {
		imcMulher(alt);
	} else if (s == 'M' || s == 'm') {
		imcHomem(alt);	
	}
}
