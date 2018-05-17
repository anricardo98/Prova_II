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
	quant_livro = 0;
	quant_cd = 0;
	quant_dvd = 0;

	adicionar(livro1);
	adicionar(livro2);
	adicionar(cd1);
	adicionar(cd2);
	adicionar(dvd1);
	adicionar(dvd2);	

}

Acervo::~Acervo(){

}

void Acervo::adicionar(Informacoes *a){
	vector<Informacoes*>::iterator filtro;
	int aux = 0;
	for (filtro = deposito.begin(); filtro != deposito.end(); filtro++){
		if ((*filtro)->getTitulo().compare(a->getTitulo()) == 0 && (*filtro)->getFormato() == a->getFormato()){
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

	if (aux == 1){
		cout << "Titulo ja adicionado" << endl;
	}
	
 }

void Acervo::remover (string tit, int form){
	vector<Informacoes*>::iterator filtro2;
        int aux = 0;
	int contador = 0;
        for (filtro2 = deposito.begin(); filtro2 != deposito.end(); filtro2++){
                if ((*filtro2)->getTitulo().compare(tit) == 0 && (*filtro2)->getFormato() == form){
			
			deposito.erase(deposito.begin()+contador);
			contador--;                
			aux = 1;   

			if ((*filtro2)->getFormato() == 1){
				quant_livro--;
			}

			else if ((*filtro2)->getFormato() == 2){
				quant_cd--;
			}

			else if ((*filtro2)->getFormato() == 3){
				quant_dvd--;
			}	     
                }
		
		cout << "Remocao realizada" << endl;
		
		contador++;
        }

	if (aux == 0){
		cout << "O item indicado nao esta na lista" << endl;
	}

}

void Acervo::modificar(string tit, int resposta){
	vector<Informacoes*>::iterator filtro5;
	int y;
	string x;
	long int z;
	int aux;
	int aux_2 = 0;
	int i;
	int pos;
	for (filtro5 = deposito.begin(); filtro5 != deposito.end(); filtro5++){
		if ((*filtro5)->getTitulo().compare(tit) == 0 && (*filtro5)->getFormato() == resposta){
			pos = i;
			aux_2 = 1;
		}
		i++;	
	}
	

	if (aux_2 == 1){
		cout << "Deseja mudar o titulo? Digite 1 se sim" << endl;
		cin >> aux;
	
		if (aux == 1){
			cout << "Qual o novo titulo?" << endl;
			cin.ignore();
			getline (cin, x);
			deposito[pos]->setTitulo(x);
		}
	
		cout << "Deseja mudar o ano de lancamento? Digite 1 se sim" << endl;
		cin >> aux;
	
		if (aux == 1){
			cout << "Qual o novo ano de lancamento?" << endl;
			cin >> y;
			deposito[pos]->setAno(y);

		}	

		if (resposta == 1){
			
			cout << "Deseja mudar o(a) Autor(a)? Digite 1 se sim" << endl;
			cin >> aux;
			Livro *salvar = (Livro*) deposito[pos];
	
			if (aux == 1){
				cout << "Qual o(a) novo(a) autor(a)?" << endl;
				cin.ignore();
				getline (cin, x);
				salvar->setResponsavel(x);
			}

			cout << "Deseja mudar o Editora? Digite 1 se sim" << endl;
			cin >> aux;
		
			if (aux == 1){
				cout << "Qual a nova editora?" << endl;
				cin.ignore();
				getline (cin, x);
				salvar->setEditora(x);
			}

			cout << "Deseja mudar o ISBN? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual o novo ISBN de lancamento?" << endl;
				cin >> z;
				salvar->setISBN(z);
			}
		}

		else if (resposta == 2){

			CD *salvar = (CD*) deposito[pos];
			cout << "Deseja mudar o(a) compositor(a)? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual o(a) novo(a) compositor(a)?" << endl;
				cin.ignore();
				getline (cin, x);
				salvar->setResponsavel(x);
			}

			cout << "Deseja mudar a quantidade de faixas? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual a nova quantidade de faixas?" << endl;
				cin >> y;
				salvar->setFaixa(y);
			}
		

			cout << "Deseja mudar a gravadora? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual a nova gravadora?" << endl;
				cin.ignore();
				getline (cin, x);
				salvar->setGrava(x);
			}
		}

			
		else if (resposta == 3){

			Dvd *salvar = (Dvd*) deposito[pos];
			cout << "Deseja mudar o(a) diretor(a)? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual o(a) novo(a) diretor(a)?" << endl;
				cin.ignore();
				getline (cin, x);
				salvar->setResponsavel(x);
			}

			cout << "Deseja mudar o tempo de duracao? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual o novo tempo de duracao do filme?" << endl;
				cin >> y;
				salvar->setDuracao(y);
			}
	

			cout << "Deseja mudar a classificacao etaria? Digite 1 se sim" << endl;
			cin >> aux;
	
			if (aux == 1){
				cout << "Qual a nova classificacao?" << endl;
				cin >> y;
				salvar->setClassificacao(y);
			}
		}

	}

	if (aux_2 == 0){
		cout << "Elemento nao encontra-se na lista" << endl;
	}
	
}

void Acervo::mostrar(){
	
	vector<Informacoes*>::iterator filtro4;
	int contador_1 = 0, contador_2 = 0, contador_3 = 0;
	
	
	int i = 0;
	for (filtro4 = deposito.begin(); filtro4 != deposito.end(); filtro4++){
		if ((*filtro4)->getFormato() == 1){
			Livro *aux = (Livro*) deposito[i];
			cout << "Livro " << contador_1 + 1 << endl;
			cout << "Titulo: " << aux->getTitulo() << endl;
        		cout << "Autor: " << aux->getResponsavel() << endl;;
        		cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Editora: " << aux->getEditora() << endl;
			cout << "ISBN: " << aux->getISBN() << endl << endl;; 
			contador_1++;
		}

		else if ((*filtro4)->getFormato() == 2){
			CD *aux = (CD*) deposito[i];
			cout << "CD " << contador_2 + 1 << endl;
			cout << "Titulo: " << aux->getTitulo() << endl;
                        cout << "Autor: " << aux->getResponsavel() << endl;
                        cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Quantidade de faixas: " << aux->getFaixa() << endl;
			cout << "Gravadora: " << aux->getGrava() << endl << endl;
			contador_2++;
			
		}

		else if ((*filtro4)->getFormato() == 3){
			Dvd *aux = (Dvd*) deposito[i];
			cout << "DVD " << contador_3 + 1 << endl;
			cout << "Titulo: " << aux->getTitulo() << endl;
                        cout << "Autor: " << aux->getResponsavel() << endl;;
                        cout << "Ano de lancamento: " << aux->getAno() << endl;
			cout << "Duracao: " << aux->getDuracao() << endl;
			cout << "Classificacao: " << aux->getClassificacao() << endl << endl;
			contador_3++;
		}
		
		i++;
	}
}

void Acervo::quantidade(){
	cout << "Livro: " << quant_livro << endl;
	cout << "CD: " << quant_cd << endl;
	cout << "DVD: " << quant_dvd << endl;
	cout << "Total: " << quant_livro + quant_cd + quant_dvd << endl;
}

