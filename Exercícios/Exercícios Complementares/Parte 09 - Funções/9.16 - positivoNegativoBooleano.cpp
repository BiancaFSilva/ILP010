#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

void verifica (int n) {
	bool tipo;
	
	if (n > 0) {
		cout << "\nO numero " << n << " e  positivo";
	} else {
		cout << "\nO numero " << n << " e  negativo";
	}
	
	return;
} 

int main () {
    // Declaração de variáveis
    int n;
    char op;
    
    do {
    	// Cabeçalho
    	system("cls");
	    cabecalho();
	    
	    // In?cio da l?gica de programa??o
	    cout << "Digite um numero inteiro: ";
	    cin >> n;
	    
	    // Apresenta??o dos resultados 
	    verifica(n);				
	    	
		cout << "\n\nDeseja executar o programa novamente: (S/N) ";
		cin >> op;
		
	} while (op == 'S' || op == 's');
}