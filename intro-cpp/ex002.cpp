#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float nota1, nota2, nota3, media, mediaTurma;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	cout << "A média final do aluno é: " << round(media) << endl;
	
	cout << "Digite a média da nota da turma: ";
	cin >> mediaTurma;
	
	if (media > mediaTurma) {
		cout << "Aluno acima da média: ";
	} else if (media < mediaTurma) {
		cout << "Aluno está abaixo da média: ";
	} else {
		cout << "Aluno está na média: ";
	}
	
	return 0;
}
