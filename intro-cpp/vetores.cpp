#include <iostream>

using namespace std;

int main()
{
	// alocação estática
	//int vet[4];
	
	//vet[0] = 5;
	//vet[1] = 10;
	
	//int vet[4] = {5, 10};
	//cout << vet[1] << endl;
	
	//for (int i = 0; i < 4; i++) {
		//cout << vet[i] << " - ";
	//}
	
	//cout << endl;
	
	//int tam;
	//tam = sizeof(vet) / sizeof(int);
	//cout << "Tamanho de inteiro: " << sizeof(int) << endl;
	//cout << "Quantidade de elementos do vetor: " << tam << endl;
	
	int tamanho;
	
	cout << "Digite o tamanho do vetor: ";
	cin >> tamanho;
	
	int *arr = new int[tamanho];
	
	for (int i = 0; i < tamanho; i++) {
		cout << "Digite o elemento " << i + 1 << " do vetor: ";
		cin >> arr[i];
	}
	
	cout << '[';
	for (int i = 0; i < tamanho; i++) {
		cout << arr[i] << " ";
	}
	cout << ']';
	
	delete []arr;
	
	return 0;
}
