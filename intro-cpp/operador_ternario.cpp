#include <iostream>

using namespace std;

int main()
{ 
	float nota1, nota2, media;
	
	cout << "informe a nota 1: ";
	cin >> nota1;
	
	cout << "informe a nota 2: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	if (media > 0 and media <= 10) {
		cout << "Média " << media << endl;
	}
	
	(media >= 6) ? cout << "Aprovado!" : cout << "Reprovado";
	
	return 0;
}
