#include <iostream>
using namespace std;

int main () {
    // Declara??o de vari?veis
    int c, idade, maior = 0, menor = 1000;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    for (c = 1; c <= 3; c++) {
    	cout << "Digite a idade: ";
    	cin >> idade;
    	
    	if (idade < 0) {
    		cout << "Dados incorretos! A idade deve ser de um valor positivo: ";
    		cin >> idade;
		}
		
		if (idade > maior) {
			maior = idade;
		}
		
		if (idade < menor) {
			menor = idade;
		}
	}
	
    // Apresenta??o dos resultados    
    cout << "\nA maior e idade e: " << maior; 
    cout << "\nA maior e idade e: " << menor; 
}

