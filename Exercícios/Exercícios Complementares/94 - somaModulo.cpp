#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float modulo (float num) {
	if (num > 0) { 
		return num; 
	} else {
		return -num; 
	}   
}

float soma (float n1, float n2) {
	return n1 + n2;
}

int main() {
	// Declaração de variáveis
    float n, m;

    // Cabeçalho
    cabecalho();
    
    cout << "Digite o primeiro numero: ";
    cin >> n;
    cout << "Digite o segundo numero: ";
    cin >> m;
    
    n = modulo(n);
    m = modulo(m);
    
    // Apresentação dos resultados  
    cout << "\nA soma do modulo dos numeros informados e: " << soma(n, m);
}
