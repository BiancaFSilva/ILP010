#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int iPedro, iJoana;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "As idades informadas NAO podem ser iguais";
    cout << "\n\nDigite a idade do Pedro: ";
    cin >> iPedro;
    cout << "Digite a idade da Joana: ";
    cin >> iJoana;

    // Apresenta��o dos resultados    
    if (iPedro > iJoana) {
        cout << "\nPedro e o mais velho entre eles";  
    } else if (iJoana > iPedro) {
        cout << "\nJoana e a mais velha entre eles";
    } else {
    	cout << "\nJoana e Pedro tem a mesma idade";
	} 
}
