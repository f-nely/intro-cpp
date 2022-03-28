#include <iostream>
#include <ctype.h>

using namespace std;

float potenciacao(float base, int exp);

int main()
{
	float b, respot;
	int e;
	char resp;

	while (true) {
			cout << "Digite a base: ";
			cin >> b;
			
			cout << "Digite o expoente: ";
			cin >> e;
		
		if (b > 0 && e > 0) {
			
			respot = potenciacao(b, e);
			
			cout << "O resultado de " << b << " elevado a " << e << " é igual a " << respot << endl;
			
			cout << "Quer continuar [S/N] ";
			cin >> resp;
			
		
		} else {
			cout << "Por favor, digite números positivos.\n";
			break;
		}
		
		resp = toupper(resp);
		
		if (resp == 'N') {
			break;
		}	

	}

	
	return 0;
}


float potenciacao(float base, int exp)
{
	int r = 1;
	for (int i = 1; i <= exp; i++) {
		r *= base;
	}

	return r;
}
