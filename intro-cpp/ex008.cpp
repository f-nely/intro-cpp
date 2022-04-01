#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	int tam;
	char resp;

	
	while (true) {
		
		cout << "Digite o tamanho do vetor: ";
		cin >> tam;
	
		int arr[tam];
	
	
		for (int i = 0; i < tam; i++) {
			cout << "Digite o valor da posição " << i + 1 << " º ";
			cin >> arr[i];
		}
		
		for (int i = 0; i < tam; i++) {
			cout << arr[i] << " ";
		}
		
		
		cout << "\nQuer imprimir outro vetor? [S/N] ";
		cin >> resp;
		
		resp = toupper(resp);
		if (resp == 'N') {
			break;
		}
		
	}

	
	return 0;
}

