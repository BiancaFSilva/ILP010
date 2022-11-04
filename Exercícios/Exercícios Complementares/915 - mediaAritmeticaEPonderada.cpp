/*Desenvolva  um  programa  que  possua  um procedimento que recebe três notas de um aluno por parâmetro e uma letra. 
  Se a letra for A, o procedimento calcula a média aritmética das notas do aluno, se for P, calcula a sua média ponderada (pesos: 5, 3 e 2),
   e se for H, a sua média harmônica.*/
   
#include <iostream>
using namespace std;

int main() {
	float n1, n2, n3, media;
	char op;
	
	//Cabecalho
    cout << "Fatec Sao Caetano do Sul - Antonio Russo\n";
    cout << "ADSMA2, ILP010 - Linguagem de Programacao\n";
    cout << "Bianca Letícia Floriano da Silva\n\n\n";
		
		cout << "\n\nDigite a primeira nota: ";
		cin >> n1;
		cout << "Digite a segunda nota: ";
		cin >> n2;
		cout << "Digite a terceira nota: ";
		cin >> n3;
		
		cout << "\nDigite a opcao para a media";
		cout << "\nAritimetica ------ A";
		cout << "\nPonderada -------- P";
		cout << "\nHarmonica -------- H";
		cout << "\nOpcao: ";
		cin >> op;
		
		if(op == 'A' || op == 'a'){
			media = (n1 + n2 + n3) / 3;
			cout << "\nA media solicitada e igual " << media;
		}
		if(op == 'P' || op == 'p'){
			media = ((n1*5) + (n2*3) + (n3*2)) / 10;
			cout << "\nA media solicitada e igual " << media;
		}
		if(op == 'H' || op == 'h'){
			media = (3/ ((1/n1) + (1/n2) + (1/n3)));
			cout << "\nA media solicitada e igual " << media;
		}
}
