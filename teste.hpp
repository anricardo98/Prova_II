#ifndef ACERVO_HPP
#define ACERVO_HPP
#include "informacoes.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Acervo{
protected:
	vector<Informacoes*> deposito;
	int quant_cd;
	int quant_dvd;
	int quant_livro;
		
public:
	Acervo (Informacoes *livro1, Informacoes *livro2, Informacoes *cd1, Informacoes *cd2, Informacoes *dvd1, Informacoes *dvd2);
	void adicionar(Informacoes *a);
	void remover (string tit, int form);
	void modificar();
	void mostrar();
	void quantidade();
};


#endif
