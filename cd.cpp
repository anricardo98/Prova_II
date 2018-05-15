#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "cd.hpp"
#include "informacoes.hpp"

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



