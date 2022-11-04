#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int tabuada (int n) {
	cout << "\n\tTABUADA DO " << n << "\n";
	
	for (int i = 0; i <= 9; i++) {
		cout << "\n\t " << i << " x " << n << " = " << i * n;    
	}
}

int main() {
	// Declaração de variáveis
    int n;
    
    //Cabecalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite o numero da tabuada que deseja: ";
    cin >> n;
    
    tabuada(n);
    
}
