#include <iostream>

using namespace std;

int main()
{
	int *idade1 = new int;
	int *idade2 = new int;
	
	cout << "Digite a primeira idade: ";
	cin >> *idade1;
	
	cout << "Digite a segunda idade: ";
	cin >> *idade2;
	
	float *media = new float;
	*media = (*idade1 + *idade2) / 2;
	
	cout << "A média entre " << *idade1 << " e " << *idade2 << " é: " << *media; 
	
	return 0;
}
