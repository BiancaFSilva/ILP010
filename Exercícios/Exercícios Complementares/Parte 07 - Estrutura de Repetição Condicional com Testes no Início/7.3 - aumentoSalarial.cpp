#include <iostream>
using namespace std;

int main () {
    // Declara��o de vari�veis
    int i, c;
    double sal = 1015.0;
    double porcent = 0.015;

    // Cabe�alho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // In�cio da l�gica de programa��o
    cout << "Digite um ano que deseja saber o valor do salario (a partir de 1996): ";
    cin >> i;
    
    while ((i < 1996) || (i > 2000)) {
    	cout << "Digite um ano entre 1996 e 2000: ";
    	cin >> i;
	}
	
	c = i - 1996;
	
	while (c >= 1) {
		porcent = porcent * 2;
		sal += (sal * porcent);
		
		cout << "\n" << (i - c) << " = R$ " << sal;
		c--;
	}

    // Apresenta��o dos resultados
    cout << "\n\nO salario do ano " << i << " sera de R$ " << sal;
}
