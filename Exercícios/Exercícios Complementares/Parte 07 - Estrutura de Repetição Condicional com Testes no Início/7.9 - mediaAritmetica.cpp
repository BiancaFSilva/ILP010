#include <iostream>
using namespace std;

int main () {
    // Declaraï¿½ï¿½o de variï¿½veis
    int n, i;
    float num, soma, media;

    // Cabeï¿½alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // Inï¿½cio da lï¿½gica de programaï¿½ï¿½o
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
