#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n, i;
    float num, soma;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite a quantidade de numeros para calcular a media: ";
    cin >> n; 

	while (n < 0) { 
		cout << "Dados incorretos! Digite a quantidade de numeros para calcular a media: ";
    	cin >> n; 
	}  
	
	i = n;
	
	while (i >= 1) { 
		cout << "Digite o " << (n-i+1) << "o numero: ";
		cin >> num;
		soma += num;
		i--;
	}   

	cout << "\nA media dos numeros fornecidos e: " << (soma/n);
}

