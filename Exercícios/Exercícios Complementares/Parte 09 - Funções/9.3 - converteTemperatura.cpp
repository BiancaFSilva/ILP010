#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Let�cia Floriano da Silva\n\n\n";
}

float converte (float gC) {
	float gF;
	
	gF = (9 * gC + 160) / 5;
	return gF;
}

int main() {
	// Declara��o de vari�veis
    float c, f;

    // Cabe�alho
    cabecalho();
    
    cout << "Digite a temperatura em Graus Celsius: ";
    cin >> c;
    
    f = converte(c);
    
    // Apresenta��o dos resultados  
    cout << "Essa temperatuda em Fahrenheit e: " << f;
}
