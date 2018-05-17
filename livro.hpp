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
	long int isbn;
public:
	Livro();
	~Livro();
	Livro(string a, string b, int c, string d, long int e);
	string getEditora();
	long int getISBN();
	void setEditora(string editora);
	void setISBN(long int isbn);
};

#endif
