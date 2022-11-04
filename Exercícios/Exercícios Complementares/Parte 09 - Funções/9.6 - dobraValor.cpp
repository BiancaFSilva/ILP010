#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int soma (int a, int b) {
	return a + b;
}

int dobro (int d) {
	return 2 * d;
}

int triplo (int t) {
	return 3 * t;
}

int main () {
    // Declaração de variáveis
    float n, m, sum;

    // Cabeçalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite o primeiro numero: ";
    cin >> n;
    cout << "Digite o segunndo numero: ";
    cin >> m;
	
	// Apresenta??o dos resultados 
	cout << "\nO dobro do primeiro numero e " << dobro(n) << " e o do segundo numero e " << dobro(m);
	sum = soma(dobro(n), dobro(m));
	cout << "\nA soma do dobro desses numeros e: " << sum;
	cout << "\nO triplo da soma desses numeros e: " << triplo(sum);
}
