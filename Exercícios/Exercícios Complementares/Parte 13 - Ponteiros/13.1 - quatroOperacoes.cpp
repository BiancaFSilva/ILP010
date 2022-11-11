#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main() {
	// Declaração das variáveis
	int *pnt1, *pnt2;
	int n, m;	
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	pnt1 = &n;
	pnt2 = &m;
	
	cout << "Informe o primeiro numero: ";
	cin >> *pnt1;
	cout << "Informe o segundo numero: ";
	cin >> *pnt2;
	
	// Apresentação dos resultados 
	cout << "\nSoma: " << ((*pnt1) + (*pnt2));
	cout << "\nSubtracao: " << ((*pnt1) - (*pnt2));
	cout << "\nMultiplicacao: " << ((*pnt1) * (*pnt2));
	cout << "\nDivisao: " << ((*pnt1) / (*pnt2));
}
