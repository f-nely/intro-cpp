#include <iostream>
#include <math.h>

using namespace std;

int fatorial(int n);

int main()
{
	int n, fa;
	
	cout << "Digite um número: ";
	cin >> n;
	
	fa =  fatorial(n);
	
	cout << "O fatorial de " << n << " é igual a " << fa;
	
	return 0;
}

int fatorial(int n)
{
	int fat = 1;
	for (int i = 1; i <= n; i++) {
		fat *= i;
	}
	return fat;
}
