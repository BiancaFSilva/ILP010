#include <iostream>
using namespace std;

void cabecalho() {
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
}

float mediaAritmetica (float a, float b, float c) {
	float media;
	media = (a + b + c) / 3;
	
	return media;
} 

float mediaPonderada (float a, float b, float c) {
	float media;
	media = ((a * 5) + (b * 3) + (c * 2)) / (5 + 3 + 2);
	
	return media;
} 

float mediaHarmonica (float a, float b, float c) {
	float media;
	media = ((1 / a) + (1 / b) + (1/ c)) / 3;
	
	return media;
} 

int main () {
    // Declaração de variáveis
    int n1, n2, n3;
    char op;

    // Cabeçalho
    cabecalho();
    
    // In?cio da l?gica de programa??o
    cout << "Digite a primeira nota: ";
    cin >> n1;
    
    cout << "Digite a segunda nota: ";
    cin >> n2;
    
    cout << "Digite a terceira nota: ";
    cin >> n3;
    
    cout << "\n\nCALCULA MEDIA";
    cout << "\n[A] Aritmetica \n[P] Ponderada \n[H] Harmonica";
    cout << "\n\nInforme a opcao desejada: ";
    cin >> op;
    
    // Apresenta??o dos resultados 
    if (op == 'A' || op == 'a') {
		cout << "\nA media aritmetica e: " << mediaAritmetica(n1, n2, n3);
	} else if (op == 'P' || op == 'p') {
		cout << "\nA media ponderada e: " << mediaPonderada(n1, n2, n3);
	} else if (op == 'H' || op == 'h') {
		cout << "\nA media harmonica e: " << mediaHarmonica(n1, n2, n3);
	}
}