#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, i;
    float num, soma;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
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

