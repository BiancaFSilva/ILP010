#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Let�cia Floriano da Silva\n\n\n";
}

int soma (int a, int b) {
	return a + b;
}

int dobro (int d) {
	return 2 * d;
}

int main () {
    // Declara��o de vari�veis
    float n, m, sum;

    // Cabe�alho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite o primeiro numero: ";
    cin >> n;
    cout << "Digite o segunndo numero: ";
    cin >> m;
    
    sum = soma(n, m);
	
	// Apresenta??o dos resultados 
	cout << "\nA soma desses numeros e: " << sum;
	cout << "\nO dobro do primeiro numero e " << dobro(n);
	cout << "\nO dobro do segundo numero e: " <<  dobro(m);
}
