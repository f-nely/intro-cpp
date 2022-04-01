#include <iostream>

using namespace std;

class Carro
{ 
	private:
	
		string nome;
		int ano;
		float preco, km;
	
	public:
		
		Carro(string nome, int ano, float preco, float km);
		
		void setnome(string nome);
		
		string getnome();
	
		void setano(int ano);
		
		int getano();
		
		void setpreco(float preco);
		
		float getpreco();
		
		float getkm();
};
