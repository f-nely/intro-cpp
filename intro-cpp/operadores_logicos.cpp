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
	
	
	if (media < 2.5) {
		cout << "Nota final: D";
	} else if (media < 5) {
		cout << "Nota final: C";
	} else if (media < 7.5) {
		cout << "Nota final: B";
	} else {
		cout << "Nota final: A";
	}
	
	float freq;
	cout << "\nQual é a frequência do aluno? ";
	cin >> freq;
	
	/*if (media >= 6 && freq >= 75) {
		cout << "Aluno aprovado!";
	} else {
		cout << "Aluno reprovado!";
	}*/
	
	if (media < 6 || freq < 75) {
		cout << "Aluno reprovado!";
	} else {
		cout << "Aluno reprovado!";
	}
	
	return 0;
}
