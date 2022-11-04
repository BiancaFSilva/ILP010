#include <iostream>
using namespace std;

int main() {
    int qnt, cont;
	float nota, soma=0, maior= 0, menor = 10;
    
    // Cabeï¿½alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";

    // Inï¿½cio da lï¿½gica de programaï¿½ï¿½o
    cout << "Digite quantas notas voce deseja calcular a media: ";
	cin >> qnt;
	
	while (qnt < 0){
		cout << "ERRO!!! Digite novamente a quantidade de notas: ";
		cin >> qnt;
	}
	
	cont = 1;
	
	while (cont <= qnt){
		
		cout << "Digite a nota: ";
		cin >> nota;
		
		while ((nota < 0) || (nota > 10)){
			cout << "ERRO!!! Digite novamente a nota: ";
		    cin >> nota;
		}
		soma = soma + nota;
		
		if (nota > maior) {
			maior = nota;
		}
		if (nota < menor){
			menor = nota;
		}
		cont++;
	}
	
	cout << "\nA soma das notas fornecidas e: " << soma;
	cout << "\nA media das notas fornecidas e: " << (soma / qnt);
	cout << "\nA maior das notas fornecidas e: " << maior;
	cout << "\nA menor das notas fornecidas e: " << menor;
}
