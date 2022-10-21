#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int verifica(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
}

int main() {
    // Declara??o de vari?veis
    int n, m;
    
    // Cabe?alho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite o primeiro numero: ";
    cin >> n;
    cout << "Digite o segundo numero: ";
    cin >> m;

    // Validação
    while (m == n) {
    	cout << "Dados incorretos! Digite novamente o segundo numero: ";
		cin >> m;
	}
	
	// Apresenta??o dos resultados 
	cout << "\nO maior numero e: " << verifica(n, m);
}
