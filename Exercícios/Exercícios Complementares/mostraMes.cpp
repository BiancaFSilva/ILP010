#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero entre 1 e 12";
    cout << "Digite um numero: ";
    cin >> n;

    if (n >= 1 && n <= 12) {
    	if (n == 1) { cout << "Janeiro"; }
    	else if (n == 2) { cout << "Fevereiro"; }
    	else if (n == 3) { cout << "Marco"; }
    	else if (n == 4) { cout << "Abril"; }
    	else if (n == 5) { cout << "Maio"; }
    	else if (n == 6) { cout << "Junho"; }
    	else if (n == 7) { cout << "Julho"; }
    	else if (n == 8) { cout << "Agosto"; }
    	else if (n == 9) { cout << "Setembro"; }
    	else if (n == 10) { cout << "Outubro"; }
    	else if (n == 11) { cout << "Novembro"; }
    	else if (n == 12) { cout << "Dezembro"; }
	} else {
		cout << "O numero informado esta fora do solicitado";
	}
}
