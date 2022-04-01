#include <iostream>

using namespace std;

class CidadesBrasil
{
	private:
	
		string nome;
		int fundacao, area;
		float populacao;
	
	public:
	
		CidadesBrasil(string nome, int area, int fundacao, float populacao)
		{
			this->nome = nome;
			this->area = area;
			this->fundacao = fundacao;
			this->populacao = populacao;
		}
				
		string getnome()
		{
			return this->nome;
		}
				
		int getarea()
		{
			return this->area;
		}
				
		int getfundacao()
		{
			return this->fundacao;
		}
				
		float getpopulacao()
		{
			return this->populacao;
		}
};

int main()
{
	CidadesBrasil sp("São Paulo", 1521110, 1554, 12396372);
	
	cout << "Nome: " << sp.getnome() << endl;
	cout << "Área: " << sp.getarea() << endl;
	cout << "Fundação: " << sp.getfundacao() << endl;
	cout << "População: " << sp.getpopulacao() << endl;
	
	return 0;
}
