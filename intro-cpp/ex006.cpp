#include <iostream>

using namespace std;

int main()
{
	float totfamilia[5], media;
	int tam;
	
	tam = sizeof(totfamilia) / sizeof(float);
	
	for (int i = 0; i < tam; i++) {
		cout << "Digite o total gasto pela " << i + 1 << "º família: ";
		cin >> totfamilia[i];
		
		media += totfamilia[i];
		
	}
	
	media /= tam;
	
	cout << "Média de gastos: " << media << endl;
	
	for (int i = 0; i < tam; i++) {
		if (totfamilia[i] < media) {
			cout << "A família " << i + 1 << " tem gastos abaixo da média\n";
		} else if (totfamilia[i] == media) {
			cout << "A família " << i + 1 << " tem gastos igual a média\n";
		} else {
			cout << "A família " << i + 1 << " tem gastos acima da média\n";
		}
	}
	
	
	return 0;
}
