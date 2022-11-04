#include <iostream>
using namespace std;

int main() {
    int i = 1;
	float nota, soma=0, maior=0, menor=10;
    
    // Cabeï¿½alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // Inï¿½cio da lï¿½gica de programaï¿½ï¿½o
    do {
    	cout << "Insira a nota: ";
		cin >> nota;
		
		while (nota < 0 || nota > 10) {
			cout << "Dados incorretos! Digite novamente a nota: ";
		    cin >> nota;
		}
		soma += nota;
		
		if (nota > maior) {	maior = nota; }
		if (nota < menor) { menor = nota; }
		i++;
	} while (i <= 10);

	cout << "\nA soma das notas fornecidas e: " << soma;
	cout << "\nA media das notas fornecidas e: " << (soma / 10);
	cout << "\nA maior das notas fornecidas e: " << maior;
	cout << "\nA menor das notas fornecidas e: " << menor;
}
