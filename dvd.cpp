#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "dvd.hpp"
#include "informacoes.hpp"

Dvd::Dvd(string a, string b, int c, int d, int e){
	formato = 333;
	titulo = 1;
	ano = c;
	duracao = e ;
	classificacao = d;

}

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
