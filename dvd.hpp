#ifndef DVD_HPP
#define DVD_HPP
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#include "informacoes.hpp"

class Dvd: public Informacoes{
protected:
	int duracao;
	int classificacao;
public:
	Dvd();
	Dvd (string a, string b, int c, int d, int e);
	int getDuracao();
        int getClassificacao();
	void setDuracao(int duracao);
	void setClassificacao(int classificacao);
};

#endif
