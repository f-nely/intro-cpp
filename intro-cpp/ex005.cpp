#include <iostream>

using namespace std;

int main()
{
	int idade;
	float salario;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	cout << "Digite seu salário: ";
	cin >> salario;
	
	if (idade >= 21 && salario < 1200) {
		cout << "pode participar do programa: ";
	} else {
		cout << "não pode participar do programa: ";
	}
	
	return 0;
}
