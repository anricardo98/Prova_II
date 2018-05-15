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
		
public:
	void adicionar(Informacoes *a);
	void remover (Informacoes *a);
	void modificar(int pos);

}


#endif

