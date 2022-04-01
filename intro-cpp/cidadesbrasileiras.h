#include <iostream>

using namespace std;

class CidadesBrasil
{
	private:
		string nome;
		int fundacao, area;
		float populacao;
	
	public:
		CidadesBrasil(string nome, int area, int fundacao, float populacao);
		
		string getnome();
		
		int getarea();
		
		int getfundacao();
		
		float getpopulacao();
};
