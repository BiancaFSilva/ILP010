#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int iPedro, iJoana, iIsmael;

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
    cout << "Digite a idade do Ismael: ";
    cin >> iIsmael;

    // Apresenta��o dos resultados    
    if ((iPedro > iJoana) && (iPedro > iIsmael)) {
        cout << "\n\nPedro e o mais velho entre eles";  
    } else if ((iJoana > iPedro) && (iJoana > iIsmael)) {
        cout << "\n\nJoana e a mais velha entre eles";
    } else if ((iIsmael > iPedro) && (iIsmael > iJoana)) {
        cout << "\n\nIsmael e o mais velho entre eles";
    }
}
