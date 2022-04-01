#include <iostream>
#include "cidadesbrasileiras.h"

using namespace std;

int main()
{
	CidadesBrasil sp("São Paulo", 1521110, 1554, 12396372);
	
	cout << "Nome: " << sp.getnome() << endl;
	cout << "Área: " << sp.getarea() << endl;
	cout << "Fundação: " << sp.getfundacao() << endl;
	cout << "População: " << sp.getpopulacao() << endl;
	
	return 0;
}
