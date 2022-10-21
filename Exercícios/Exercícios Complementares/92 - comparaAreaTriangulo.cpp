#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

int verifica (int n1, int n2) {
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
}

int area (int lado, int alt) {
	return lado * alt;
}

int main () {
    // Declaração de variáveis
    int b, h, a, a1;

    // Cabeçalho
    cabecalho();

    // Início da lógica de programação
    cout << "Digite a base do primeiro retangulo (em cm): ";
    cin >> b;
    cout << "Digite a altura do primeiro retangulo (em cm): ";
    cin >> h;
    
    a = area(b, h); 

    cout << "\nDigite a base do segundo retangulo: ";
    cin >> b;
    cout << "Digite a altura do segundo retangulo: ";
    cin >> h;
    
    a1 = area(b, h); 

    // Comparacao e apresentação dos resultados  
    cout << "\n\nA area do primeiro retangulo e de " << a << "cm.";
    cout << "\nA area do segundo retangulo e de " << a1 << "cm.\n\n";

    if (a == a1) {
		cout << "Ambos possuem uma area equivalente";
    } else {
        cout << "A maior area e: " << verifica(a, a1);
    }
}
