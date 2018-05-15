#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "livro.hpp"
#include "informacoes.hpp"

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
