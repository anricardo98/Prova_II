#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "informacoes.hpp"

string Informacoes::getTitulo(){
	return titulo;
}

string Informacoes::getResponsavel(){
	return responsavel;
}
int Informacoes::getAno(){
	return ano;
}
void Informacoes::setTitulo(string titulo){
	this->titulo = titulo;
}

void Informacoes::setResponsavel(string responsavel){
	this->responsavel = responsavel;
}
void Informacoes::setAno(int ano){
	this->ano = ano;
}

