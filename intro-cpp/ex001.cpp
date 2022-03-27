#include <iostream>

using namespace std;

int f(int x);

int main()
{
	int a, valorf;
	
	cout << "Digite um número: ";
	cin >> a;
	
	valorf =  f(a);
	
	cout << "O valor da função no ponto " << a << " é igual a " << valorf;
	
	return 0;
}

int f(int x)
{
	int result;
	return result = x*x - 3 * x + 5;
}
