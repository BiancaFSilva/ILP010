#include <iostream>
using namespace std;

int main () {
    // Declaração de variáveis
    float total, maca, morango, peso, totalMaca, TotalMorango;

    // Cabeçalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Leticia Floriano da Silva\n\n\n";

    // Início da lógica de programação
    cout << "\n\nDigite o peso (kg) de macas: ";
    cin >> maca;
    cout << "Digite o peso (kg) de morangos: ";
    cin >> morango;
    
    peso = maca + morango;

    if (peso < 5) {
        totalMaca = 3.5 * maca; 
		TotalMorango = 7.5 * morango;
    } else {
        totalMaca = 2.8 * maca; 
		TotalMorango = 5.3 * morango;
    }  
	
	total = totalMaca + TotalMorango;
	
	if (total > 19) {
		total = 0.92 * total;
		cout << "\nO valor total da compra e de R$ " << total;
	} else {
    	cout << "\nO valor total da compra e de R$ " << total;
	}
}
