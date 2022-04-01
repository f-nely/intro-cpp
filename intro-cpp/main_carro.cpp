#include <iostream>
#include "carro.h"

using namespace std;

int main()
{
	Carro jetta("Jetta", 2007, 85000, 10000);
	
	cout << "Nome: " << jetta.getnome() << endl;
	cout << "Ano: " << jetta.getano() << endl;
	cout << "Preço: " << jetta.getpreco() << endl;
	cout << "Kilometragem: " << jetta.getkm() << endl;
	
	Carro cruze("Cruze", 2014, 36990, 69800);
	
	cout << "Nome: " << cruze.getnome() << endl;
	cout << "Ano: " << cruze.getano() << endl;
	cout << "Preço: " << cruze.getpreco() << endl;
	cout << "Kilometragem: " << cruze.getkm() << endl;
	
	return 0;
}
