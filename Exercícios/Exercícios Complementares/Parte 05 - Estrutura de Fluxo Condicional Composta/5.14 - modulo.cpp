#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o primeiro numero inteiro: ";
    cin >> n; 

	
	if (n > 0) {
		cout << "\nO modulo do numero " << n << " e " << n; 
	} else if (n < 0) {
		cout << "\nO modulo do numero " << n << " e " << -n; 	
	}    
}
