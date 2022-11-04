#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int n, m;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "Informe um numero inteiro: ";
    cin >> n;
    cout << "Informe um numero inteiro: ";
    cin >> m;

    // Apresentação dos resultados 
    if (n > m) {
    	if (n % 2 == 1) {
	        cout << "\n\nO numero " << n << " e impar e maior que o segundo numero (" << m << ")";
	    } else {
	        cout << "\n\nO numero " << n << " e par e maior que o segundo numero (" << m << ")";
	    }
	} else if (m > n) {
		if (m % 2 == 1) {
	        cout << "\n\nO numero " << m << " e impar e maior que o primeiro numero (" << n << ")";
	    } else {
	        cout << "\n\nO numero " << m << " e par e maior que o primeiro numero (" << n << ")";
	    }
	} else {
		if ((n % 2 == 1) or (m % 2 == 1)) {
	        cout << "\n\nOs numeros sao iguais e impares";
	    } else {
	        cout << "\n\nOs numeros sao iguais e pares";
	    }
	}   
}
