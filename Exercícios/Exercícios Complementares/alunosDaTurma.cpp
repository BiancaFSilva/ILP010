// Escreva um programa que leia a quantidade de alunas e de alunos. Depois esse programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma. O programa deve verificar se a quantidade de alunos é igual a de alunas.

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

    // Comparacao e apresentação dos resultados
    cout << "Existem " << os << " alunos";
    cout << "Existem " << as << " alunas";

    if ( os > as) {
        cout << "\n\nHa mais alunos. ";
    } else if (os < as) {
        cout << "\n\nHa mais alunas. ";
    } else {
        cout << "\n\nO numero de alunos e alunas e igual. ";
    }
    
    cout << "\nExistem ao todo " << (os + as) << " alunos nesa turma.";
}