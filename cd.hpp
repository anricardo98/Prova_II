#ifndef CD_HPP
#define CD_HPP
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#include "informacoes.hpp"

class CD: public Informacoes{
protected:
	int faixas;
	string gravadora;
public:
	CD();
	CD (string a, string b, int c, int d, string e);
	int getFaixa();
	string getGrava();
	void setFaixa(int faixa);
	void setGrava(string gravadora);

};

#endif
