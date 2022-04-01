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

int main()
{
	Carro jetta("Jetta", 2007, 85000, 10000);
	
	cout << "Nome: " << jetta.getnome() << endl;
	cout << "Ano: " << jetta.getano() << endl;
	cout << "Preço: " << jetta.getpreco() << endl;
	cout << "Kilometragem: " << jetta.getkm() << endl;
	return 0;
}

Carro::Carro(string nome, int ano, float preco, float km)
{
	this->nome = nome;
	this->ano = ano;
	this->preco = preco;
	this->km = km;
}

void Carro::setnome(string nome)
{
	this->nome = nome;
}
		
string Carro::getnome()
{
	return this->nome;
}
	
void Carro::setano(int ano)
{
	this->ano = ano;
}
		
int Carro::getano()
{
	return this->ano;
}
		
void Carro::setpreco(float preco)
{
	this->preco = preco;
}
		
float Carro::getpreco()
{
	return this->preco;
}
		
float Carro::getkm()
{
	return this->km;
}
