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
    if ( os > as) {
        cout << "\n\nHa mais alunos. ";
    } else if (os < as) {
        cout << "\n\nHa mais alunas. ";
    } else {
        cout << "\n\nO numero de alunos e alunas e equivalente. ";
    }
    
    // Apresentação dos resultados
    cout << "\nExistem ao todo " << (os + as) << " alunos nesa turma, sendo " << os << " o numero de alunos e " << as << " o numero de alunas.";
}