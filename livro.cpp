#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "livro.hpp"
#include "informacoes.hpp"

Livro::Livro(){
	formato = 1;
}

Livro::~Livro(){

}

Livro::Livro(string a, string b, int c, string d, long int e){
	formato = 1;
	titulo = a;
	responsavel = b;
	ano = c;
	editora = d;
	isbn = e;
}

string Livro::getEditora(){
	return editora;
}

long int Livro::getISBN(){
	return isbn;
}

void Livro::setEditora(string editora){
	this->editora = editora;
}

void Livro::setISBN(long int isbn){
	this->isbn = isbn;
}
