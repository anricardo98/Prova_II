#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "livro.hpp"
#include "informacoes.hpp"

Livro::Livro(string a, string b, int c, string d, int e){
	formato = 1;
	titulo = a;
	responsavel = b;
	ano = c;
	editora = d;
	isbn = e;
}

string Livro::getEditora(){
	return isbn;
}

int Livro::getISBN(){
	return isbn;
}

void Livro::setEditora(string editora){
	this->editora = editora;
}

void Livro::setISBN(int isbn){
	this->isbn = isbn;
}
