#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, i = 1;
    float num, soma, media;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Let�cia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite o primeiro numero inteiro: ";
    cin >> n; 

	
	while (n <= 0) {
		cout << "\nDados incorretos! O numero " << n << " deve ser positivo"; 
		cin >> n;		
	} 
	
	do {
		cout << "Digite um dos numeros: ";
		cin >> num;
		soma += num;
		i++;
	} while (i <= n);
	
	media = soma / n;
	cout << "\nA media dos numeros fornecidos e: " << media;
}
