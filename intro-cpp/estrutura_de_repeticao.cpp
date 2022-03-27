#include <iostream>

using namespace std;

int main()
{
	int n, soma = 0;
	
	cout << "Digite um número: ";
	cin >> n;
	
	if (n >= 0) {
		
		for (int i = 0; i <= n; i++) {
			soma += i;
		}
		
	cout << "A soma dos números de 0 até " << n << " = " << soma;
	
	} else {
		
		cout << "Por favor, digite um número positivo." << endl;
		
	}
	
	/*for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}
	
	cout << "--------------------\n";
	
	int j = 10;
	while (j >= 0) {
		cout << j << endl;
		j -= 1;
	}
	
	cout << "--------------------\n";
	
	int c = 0;
	do {
		cout << c << endl;
		c += 8;
	} while (c <= 80);*/
	
	return 0;
}
