#ifndef INFORMACOES_HPP
#define INFORMACOES_HPP
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Informacoes{
protected:
	string titulo;
	string responsavel;
	int ano;
	int formato;
public:
	int getFormato();
	string getTitulo();
        string getResponsavel();
        int getAno();
	void setTitulo(string titulo);
	void setResponsavel(string responsavel);
	void setAno(int ano);
	void setFormato(int formato);
};

#endif
