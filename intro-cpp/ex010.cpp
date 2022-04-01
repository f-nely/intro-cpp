#include <iostream>

using namespace std;

void troca(int* &ptr1, int* &ptr2);

int main()
{
	int *ptr1 = new int;
	*ptr1 = 5;
	
	int *ptr2 = new int;
	*ptr2 = 7;
	
	cout << "Ponteiro 1: " << ptr1 << " e " << *ptr1 << endl;
	cout << "Ponteiro 2: " << ptr2 << " e " << *ptr2 << endl;
	
	troca(ptr1, ptr2);
	
	cout << "\nPonteiro 1: " << ptr1 << " e " << *ptr1 << endl;
	cout << "Ponteiro 2: " << ptr2 << " e " << *ptr2 << endl;
	
	return 0;
}

void troca(int* &ptr1, int* &ptr2)
{
	int aux;
	aux = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = aux;
}
