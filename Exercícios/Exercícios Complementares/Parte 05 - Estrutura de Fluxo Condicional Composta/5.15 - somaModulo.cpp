#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n, n1;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o primeiro numero inteiro: ";
    cin >> n; 
    cout << "Digite o segundo numero inteiro: ";
    cin >> n1; 

	if (n < 0) { 
		n = -n; 
	}  
	if (n1 < 0) { 
		n1 = -n1; 
	}   

	cout << "\nO a soma dos modulos dos numeros digitados e " << n + n1;
}
