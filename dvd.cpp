#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "dvd.hpp"
#include "informacoes.hpp"

int Dvd::getDuracao(){
	return duracao;
}

int Dvd::getClassificacao(){
	return classificacao;
}

void Dvd::setDuracao(int duracao){
	this->duracao = duracao;
}

void Dvd::setClassificacao(int classificacao){
	this->classificacao = classificacao;
}
