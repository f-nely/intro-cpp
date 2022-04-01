#include <iostream>
#include "cidadesbrasileiras.h"

using namespace std;

CidadesBrasil::CidadesBrasil(string nome, int area, int fundacao, float populacao)
{
	this->nome = nome;
	this->area = area;
	this->fundacao = fundacao;
	this->populacao = populacao;
}
		
string CidadesBrasil::getnome()
{
	return this->nome;
}
		
int CidadesBrasil::getarea()
{
	return this->area;
}
		
int CidadesBrasil::getfundacao()
{
	return this->fundacao;
}
		
float CidadesBrasil::getpopulacao()
{
	return this->populacao;
}
