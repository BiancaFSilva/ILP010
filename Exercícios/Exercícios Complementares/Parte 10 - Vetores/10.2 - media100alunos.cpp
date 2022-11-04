#include <iostream>
#include <conio.h>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int main() {
	// Declaração das variáveis
	float n[100], soma, media;
	int qtde;
	
	//Cabecalho
    cabecalho();
		
	// In?cio da lógica de programação
	cout << "Digite a quantidade de alunos da turma (maximo 100): ";
	cin >> qtde;
	
	while (qtde > 100 || qtde < 0) {
		cout << "Dados incorretos! Digite a quantidade de alunos da turma: ";
		cin >> qtde;
	}
	
	for (int i = 0; i < qtde; i++) {
		cout << "Informe a nota do " << (i + 1) << ".o aluno: ";
		cin >> n[i];
		
		while (n[i] > 10 || n[i] < 0) {
			cout << "Fora do intervalo permitido! \nInforme a nota do " << (i + 1) << ".o aluno: ";
			cin >> n[i];
		}
		
		soma += n[i];
	}
	
	media = soma / qtde;
		
	// Apresentação dos resultados 
	cout << "\nA media da turma e: " << media;
}