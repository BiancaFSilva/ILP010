#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int n, i;
    float num, soma, media;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Let�cia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite o primeiro numero inteiro: ";
    cin >> n; 

	
	if (n < 0) {
		cout << "\nDados incorretos! O numero " << n << " deve ser positivo"; 
		cin >> n;
	} 
	
	for (i = 1; i <= n; i++) {
		cout << "Digite um dos numeros: ";
		cin >> num;
		soma = soma + num;
	} 
	media = soma / n;
	cout << "\n\nA media dos numeros fornecidos e: " << media;
}
