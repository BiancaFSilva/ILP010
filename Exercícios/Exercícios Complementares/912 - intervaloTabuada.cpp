#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int tabuada (int n, int m) {
	for (int c = n; c <= m; c++) {
		cout << "\n\n\tTABUADA DO " << c << "\n";
		
		for (int i = 0; i <= 9; i++) {
			cout << "\n\t " << c << " x " << i << " = " << i * c;    
		}
	}	
}

int main() {
	// Declaração de variáveis
    int n, m;
    
    //Cabecalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite o numero de inicio da sequencia da tabuada: ";
    cin >> n;
    cout << "Digite o numero em que a sequencia da tabuadairá acabar: ";
    cin >> m;
    
    if (n < m) {
    	tabuada(n, m);
	} else if (m < n) {
		tabuada(m, n);
	}
    
    
    
}
