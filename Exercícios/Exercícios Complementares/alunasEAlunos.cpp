// Execute novamente o programa, de modo que seja apresentado primeiro o número de alunas e depois o número de alunos. 

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int num_alunos, num_alunas;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite o numero de alunas: ";
    cin >> num_alunas;
    cout << "Digite o numero de alunos: ";
    cin >> num_alunos;    

    // Apresentação dos resultados
    cout << "\n\nNumero de alunas matriculadas: " << num_alunas;
    cout << "\nNumero de alunos matriculados: " << num_alunos;
}