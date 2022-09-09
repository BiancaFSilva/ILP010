// Escreva um programa em C para o Ministério da Saúde que o auxilie nas informações sobre a dengue em Brasília. Esse programa deve receber os dados sobre o número de casos suspeitos, o número de casos confirmados e o número de mortes, apresentando a tela

#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int susp, conf, mort, total;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Preencha as seguintes informacoes sobre a dengue em Brasilia";
    cout << "Casos supeitos: ";
    cin >> susp;
    cout << "Casos confirmados: ";
    cin >> conf;   
    cout << "Quantidade de mortes: ";
    cin >> mort;  

    total = susp + conf + mort;

    // Apresentação dos resultados
    cout << "\n\nQuadro de informacoes sobre a dengue em Brasilia";
    cout << "\n\tNumero de casos supeitos: " << susp;
    cout << "\n\tNumero de casos confirmados: " << conf;
    cout << "\n\tNumero de mortes: " << mort;
    cout << "\n\tTOTAL: " << total;
}