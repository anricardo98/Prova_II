#ifndef LIVRO_HPP
#define LIVRO_HPP
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#include "informacoes.hpp"


class Livro: public Informacoes{
protected:
	string editora;
	int isbn;
public:
	string getEditora();
	int getISBN();
	void setEditora(string editora);
	void setISBN(int isbn);
};

#endif
