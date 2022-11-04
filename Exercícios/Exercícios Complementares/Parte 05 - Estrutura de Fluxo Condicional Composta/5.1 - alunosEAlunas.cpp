#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int os, as;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o numero de alunos: ";
    cin >> os;
    cout << "Digite o numero de alunas: ";
    cin >> as;

    // Comparacao
    if (os > as) {
        cout << "\n\nO numero de alunos e: " << os;
        cout << "\nO numero de alunas e: " << as;
    } else if (as > os) {
        cout << "\n\nO numero de alunas e: " << as;
        cout << "\nO numero de alunos e: " << os;
    } else {
    	cout << "\n\nO numero de alunos e alunas e igual";
	}
		
}
