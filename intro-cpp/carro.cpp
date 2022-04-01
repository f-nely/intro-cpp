#include <iostream>
#include "carro.h"

using namespace std;

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

