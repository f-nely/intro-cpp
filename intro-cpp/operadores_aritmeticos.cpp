#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num1 = 5, num2 = 2;
	
	
	cout << "Soma entre " << num1 << " e " << num2 << " é " << num1 + num2 << endl;
	
	cout << "Sobtração entre " << num1 << " e " << num2 << " é " << num1 - num2 << endl;
	
	cout << "Multiplicação entre " << num1 << " e " << num2 << " é " << num1 * num2 << endl;
	
	cout << "Potenciação entre " << num1 << " e " << num2 << " é " << pow(num1, num2) << endl;

	// incremento
	cout << "num1 antigo: " << num1 << endl;
	num1++;
	cout << "num1 novo: " << num1 << endl;
	// decremento
	cout << "num2 antigo: " << num2 << endl;
	num2--;
	cout << "num2 novo: " << num2 << endl;
	
	
	return 0;
}
