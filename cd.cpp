#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "cd.hpp"
#include "informacoes.hpp"

CD::CD (string a, string b, int c, int d, string e) {
	formato = 2;
	titulo = a;
	responsavel = b;
	ano = c;
	faixas = d;
	gravadora = e;
}


int CD::getFaixa(){
	return faixa;
}

string CD::getGrava(){
	return gravadora;
}

void CD::setFaixa(int faixa){
	this->faixa = faixa;
}

void CD::setGrava(string gravadora){
	this->gravadora = gravadora;
}



