#include <iostream>
using namespace std;

int main () {
    // Declara??o de vari?veis
    int c;
    float nota, soma = 0, maior = 0, menor = 10;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    for (c = 1; c <= 10; c++) {
    	cout << "Digite a nota do aluno(a): ";
    	cin >> nota; 
    	
    	if (nota < 0 || nota > 10) {
    		cout << "Dados incorretos! A nota deve estar entre 0 e 10";
    		cin >> nota;
		}
		
		soma = soma + nota;
		
		if (nota > maior) {
			maior = nota;
		}
		if (nota < menor) {
			menor = nota;
		}
	}
    
    // Apresentação dos resultados
    cout << "\n\nA soma entre as notas e: " << soma;
    cout << "\nA media das notas fornecidas e: " << soma/10;
    cout << "\nA maior nota e: " << maior;
    cout << "\nA menor nota e: " << menor;
}

