#include <iostream>

using namespace std;

class Carro
{
	private:
		string nome;
		int ano;
		float preco, km;
	
	public:
	
		Carro(string nome, int ano, float preco, float km)
		{
			this->nome = nome;
			this->ano = ano;
			this->preco = preco;
			this->km = km;
		}
		
		void setnome(string nome)
		{
			this->nome = nome;
		}
		
		string getnome()
		{
			return this->nome;
		}
	
		void setano(int ano)
		{
			this->ano = ano;
		}
		
		int getano()
		{
			return this->ano;
		}
		
		void setpreco(float preco)
		{
			this->preco = preco;
		}
		
		float getpreco()
		{
			return this->preco;
		}
		
		float getkm()
		{
			return this->km;
		}
		
};

int main()
{
	Carro palio("Palio", 1995, 10000, 3000);
	
	//palio.setano(1995);
	//palio.setnome("Palio");
	//palio.setpreco(12000);
	
	cout << "Nome: " << palio.getnome() << endl;
	cout << "Ano: " << palio.getano() << endl;
	cout << "Preço: " << palio.getpreco() << endl;
	cout << "Kilometragem: " << palio.getkm() << endl;
	
	Carro jeepcompass("Jeep Compass", 2022, 130000, 0);
	
	cout << "\nNome: " << jeepcompass.getnome() << endl;
	cout << "Ano: " << jeepcompass.getano() << endl;
	cout << "Preço: " << jeepcompass.getpreco() << endl;
	cout << "Kilometragem: " << jeepcompass.getkm() << endl;
	
	return 0;
}

