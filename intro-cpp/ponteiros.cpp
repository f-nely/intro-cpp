#include <iostream>
#include <cstddef>

using namespace std;

int main()
{
	int valor = 5;
	int* ptr;
	
	ptr = &valor;
	
	cout << "Endereço de memória da variável: " << &valor << endl; // endereço do primeiro byte
	cout << "Endereço armazenado no ponteiro: " <<  ptr << endl;
	cout << "Valor da variável, através do ponteiro: " << *ptr << endl;
	cout << "Endereço de memória do ponteiro: " << &ptr << endl;
	
	//int valor2;
	//valor2 = *ptr;
	//cout << "Valor: " << valor2 << endl;
	
	//valor = 30;
	//*ptr = 30;
	//cout << "Valor: " << valor << endl;
	//valor2 = 50;
	//ptr = &valor2;
	//cout << *ptr << endl;
	//cout << valor << endl;
	//int *ptr2;
	//ptr2 = NULL;
	//cout << ptr2 << endl;
	
	int *ptr3 = new int;
	*ptr3 = 35;
	//cout << *ptr3 << endl;
	//*ptr3 = *ptr;
	delete ptr3;
	ptr3 = ptr;
	cout << *ptr3 << endl;
	
	return 0;
}

