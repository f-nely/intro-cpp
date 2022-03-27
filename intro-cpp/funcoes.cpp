#include <iostream>

using namespace std;

#define PI 3.14;

void inscrever();

int soma(int num1, int num2);

int main()
{
	inscrever();
	
	cout << soma(11, 6);
	
	cout << endl;
	
	cout << PI;
	
	return 0;
}

void inscrever()
{
	cout << "Se inscreva no canal do \nProfessor Douglas Maioli!\n";
}

int soma(int num1, int num2)
{
	
	return num1 + num2;
}
