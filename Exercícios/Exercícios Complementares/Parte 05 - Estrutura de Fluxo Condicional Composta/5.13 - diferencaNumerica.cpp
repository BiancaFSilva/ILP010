#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    int n, n1;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Digite dois numeros inteiros diferentes\n";
    cout << "Digite o primeiro numero: ";
    cin >> n; 
	cout << "Digite o segundo numero: ";
    cin >> n1;
	
	if (n > n1) {
		cout << "\nA diferença entre " << n << " e " << n1 << " e " << (n - n1); 
	} else if (n1 > n) {
		cout << "\nA diferença entre " << n1 << " e " << n << " e " << (n1 - n);	
	}    
}
