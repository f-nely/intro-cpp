#include <iostream>

using namespace std;

int main()
{
	int linha, coluna;
	
	cout << "Digite o número de linhas: ";
	cin >> linha;
	cout << "Digite o número de colunas: ";
	cin >> coluna;
	int vet1[linha][coluna];
	int vet2[linha][coluna];
	
	cout << "\nDigite abaixo os elementos da matriz 1:\n";
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << ": ";
			cin >> vet1[i][j];
		}
	}
	
	cout << "\nDigite abaixo os elementos da matriz 2:\n";
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << ": ";
			cin >> vet2[i][j];
		}
	}
	
	int matrizsoma[linha][coluna];
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			matrizsoma[i][j] = vet1[i][j] + vet2[i][j];
		}
	}
	
	cout << "\nA soma entre estas duas matrizes é: \n";
	
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cout << matrizsoma[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
