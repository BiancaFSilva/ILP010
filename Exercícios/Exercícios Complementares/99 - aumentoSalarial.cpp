#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float reajuste (int ano, float salario, char estadoCivil) {
	if ((ano >= 5) && (estadoCivil == 'C' || estadoCivil == 'c')) {
		return salario * 1.10;
	} else {
		return salario * 1.08;
	}
}

int main () {
    // Declaração de variáveis
    int a;
    float salBruto, sal;
    char estCivil;

    // Cabeçalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    do {
    	cout << "Digite o salario bruto do funcionario: ";
    	cin >> salBruto;
	} while (salBruto <= 0);
	
	do {
    	cout << "Digite os anos de empresa do funcionario: ";
    	cin >> a;
	} while (a <= 0);
	
	cout << "Digite o estado civil do funcionario: [C] Casado [S] Solteiro   ";
    cin >> estCivil;
    
    while (estCivil != 'C' && estCivil != 'c' && estCivil != 'S' && estCivil != 's') {
    	cout << "Digite um estado civil valido: [C] ou [S]  ";
    	cin >> estCivil;
	}
	
	// Apresenta??o dos resultados 
	sal = reajuste(a, salBruto, estCivil);
	cout << "\nO novo salario do funcionario sera de R$ " << sal;	
}
