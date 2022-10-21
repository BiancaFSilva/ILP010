#include <iostream>
using namespace std;

int main () {
    // Declaraï¿½ï¿½o de variï¿½veis
    int n, i = 1;
    float num, soma, media;

    // Cabeï¿½alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // Inï¿½cio da lï¿½gica de programaï¿½ï¿½o
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
