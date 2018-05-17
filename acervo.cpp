#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "acervo.hpp"
#include "informacoes.hpp"
#include "cd.hpp"
#include "dvd.hpp"
#include "livro.hpp"

Acervo::Acervo (Informacoes *livro1, Informacoes *livro2, Informacoes *cd1, Informacoes *cd2, Informacoes *dvd1, Informacoes *dvd2){
	quant_livro = 2;
	quant_cd = 2;
	quant_dvd = 2;

	adicionar(livro1);
	adicionar(livro2);
	adicionar(cd1);
	adicionar(cd2);
	adicionar(dvd1);
	adicionar(dvd2);	

}

void Acervo::adicionar(Informacoes *a){
	vector<Informacoes*>::iterator filtro;
	int aux = 0;
	for (filtro = deposito.begin(); filtro != deposito.end(); filtro++){
		if (strcmp((*filtro)->getTitulo(), a->getTitulo()) == 0 && (*filtro)->getFormato() == a->getFormato()){
			aux = 1;	
		}
	}
	
	if (aux == 0){
		deposito.push_back(a);

		if (a->getFormato() == 1){
			quant_livro++;	
		}

		else if (a->getFormato() == 2){
			quant_cd++;
		}

		else if (a->getFormato() == 3){
			quant_dvd++;
		}
		
	}
	
 }

void Acervo::remover (string tit, int form){
	vector<Informacoes*>::iterator filtro2;
        int aux = 0;
	int contador = 0;
        for (filtro2 = deposito.begin(); filtro2 != deposito.end(); filtro2++){
                if (strcmp((*filtro2)->getTitulo(), tit) == 0 && (*filtro2)->getFormato() == form){
			deposito.erase(deposito.begin()+contador);
			contador--;                
			aux = 1;   

			if (aux->getFormato() == 1){
				quant_livro--;
			}

			else if (aux->getFormato() == 2){
				quant_cd--;
			}

			else if (aux->getFormato() == 3){
				quant_dvd--;
			}	     
                }
		
		contador++;
        }

	if (aux == 0){
		cout << "O item indicado nao esta na lista" << endl;
	}

}

void Acervo::modificar(){
	
}

void Acervo::mostrar(){
	
	vector<Informacoes*>::iterator filtro4;
	
	int i = 0;
	for (filtro4 = deposito.begin(); filtro4 != deposito.end(); filtro4++){
		if ((*filtro4)->getFormato() == 1){
			Livro *aux = (Livro*) (deposito.begin()+i);
			cout << "Livro " << i + 1 << endl;
			cout << "Titulo: " << aux->getTitulo() << endl;
        		cout << "Autor: " << aux->getResponsavel() << endl;;
        		cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Editora: " << aux->getEditora() << endl;;
			cout << "ISBN: " << aux->getISBN() << endl cout << "Titulo: " << aux->getTitulo() << endl;
		}

		else if ((*filtro4)->getFormato() == 2){
			CD *aux = (CD*) (deposito.begin()+i);
			
			cout << "Titulo: " << aux->getTitulo() << endl;
                        cout << "Autor: " << aux->getResponsavel() << endl;;
                        cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Quantidade de faixas: " << aux->getFaixa() << endl;
			cout << "Gravadora: " << aux->getGrava() << endl;
		}

		else if ((*filtro4)->getFormato() == 3){
			DVD *aux = (DVD*) (deposito.begin()+i);
			cout << "Titulo: " << aux->getTitulo() << endl;
                        cout << "Autor: " << aux->getResponsavel() << endl;;
                        cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Duracao: " << aux->getDuracao() << endl;
			cout << "Classificacao: " << aux->getClassificacao() << endl;
		}
		
		i++;
	}
}

void Acervo::quantidade(){
	cout << "Livro: " << quant_livro << endl;
	cout << "CD: " << quant_cd << endl;
	cout << "DVD: " << quant_dvd << endl;
}

