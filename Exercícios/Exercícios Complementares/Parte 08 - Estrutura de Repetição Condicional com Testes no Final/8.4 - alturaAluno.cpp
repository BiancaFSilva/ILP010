#include <iostream>
using namespace std;

int main () {
    // Declara??o de vari?veis
    int i = 1, n, maior, menor;
    float h, menorH = 3.00, maiorH = 0.0;

    // Cabe?alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In?cio da l?gica de programa??o
    do {
    	cout << "Digite o numero do " << i << "? aluno(a): ";
    	cin >> n;
    			
		cout << "Digite a altura do " << i << "? aluno(a): ";
    	cin >> h;
    			
		if (h > maiorH) {
			maiorH = h;
			maior = n;
		}
		if (h < menorH) {
			menorH = h;
			menor = n;
		}
		i++;
	} while (i <= 2);  

    // Apresenta??o dos resultados
    cout << "\n\nO aluno mais baixo e o de numero " << menor << " com " << menorH << "m";
	cout << "\nO aluno mais alto e o de numero " << maior << " com " << maiorH << "m";
}
