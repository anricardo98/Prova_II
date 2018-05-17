#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "acervo.hpp"
#include "informacoes.hpp"
#include "livro.hpp"
#include "dvd.hpp"
#include "cd.hpp"

int main(){
	int resposta;
	int produto;
	int loop = 1;

	Livro *livro1 = new Livro ("Love Simon", "Becky Albertally", 2015, "Intrisica", 9788580578935); 
	Livro *livro2 = new Livro ("Jogos Vorazes", "Suzanne Collins", 2008, "Rocco", 9788579800245);  
	Dvd *dvd1 = new Dvd ("Jogos Vorazes", "Gary Ross", 2012, 12, 144); 
	Dvd *dvd2 = new Dvd ("Vingadores","Sarah Finn", 2012, 12, 143); 
	CD *cd1 = new CD ("A thousand forms of fear", "Sia", 2014, 12, "RCA Records");
	CD *cd2 = new CD ("Dona de mim", "Iza", 2018, 14, "Warner");

	Acervo midia = Acervo (livro1 , livro2, cd1, cd2, dvd1, dvd2); 

	while (loop == 1){
        cout << "O que você deseja fazer? "<< endl;
        cout << "Digite 1 se deseja adicionar um produto ao acervo" << endl;
        cout << "Digite 2 se deseja retirar um produto do arcevo" << endl;
        cout << "Digite 3 para editar um elemento do acervo" <<endl;
        cout << "Digite 4 para verificar o acervo" << endl;
	cout << "Digite 5 para saber a quantidade de cada tipo do acervo" << endl;

        cin >> resposta;

        if (resposta == 1){
                cout << "Qual midia você deseja adicionar?" << endl;
                cout << "Digite 1 para livro" << endl;
                cout << "Digite 2 para CD" << endl;
                cout << "Digite 3 para DVD" << endl;


                cin >> produto;

                if (produto == 1){ //Livro
                    Informacoes* z = new Livro;
		    Livro* prod = (Livro*) (z);

                    string x;
                    int y;
			
		    
		    prod->setFormato(1);

                    cout << "Digite o titulo do livro" << endl;
                    cin >> x;
                    prod->setTitulo(x);

                    cout << "Digite o(a) autor(a) do livro" << endl;
                    cin >> x;
                    prod->setResponsavel(x);

                    cout << "Digite o ano de lançamento do livro" << endl;
                    cin >> y;
                    prod->setAno(y);

                    cout << "Digite o ISBN do livro, apenas os numeros" << endl;
                    cin >> y;
                    prod->setISBN(y);

                    cout << "Digite a Editora do livro" << endl;
                    cin >> x;
                    prod->setEditora(x);

                    midia.adicionar(prod);

                }

                else if (produto == 2){ //CD
                    Informacoes* z = new CD;
		    CD* prod = (CD*) (z);

		    prod->setFormato(2);

                    string x;
                    int y;
			
                    cout << "Digite o titulo do album" << endl;
                    cin >> x;
                    prod->setTitulo(x);

                    cout << "Digite o(a) compositor(a) do album" << endl;
                    cin >> x;
                    prod->setResponsavel(x);

                    cout << "Digite o ano de lançamento do album" << endl;
                    cin >> y;
                    prod->setAno(y);

                    cout << "Digite o numero de faixas do album" << endl;
                    cin >> y;
                    prod->setFaixa(y);

                    cout << "Digite a gravadora do album" << endl;
                    cin >> x;
                    prod->setGrava(x);

                    midia.adicionar(prod);
                }

                else if (produto == 3){ //DVD
                    Informacoes* z = new Dvd;
		    Dvd* prod = (Dvd*) (z);

                    string x;
                    int y;
			
                    cout << "Digite o titulo do Dvd" << endl;
                    cin >> x;
                    prod->setTitulo(x);

                    cout << "Digite o(a) diretor(a) do video do Dvd" << endl;
                    cin >> x;
                    prod->setResponsavel(x);

                    cout << "Digite o ano de lançamento do Dvd" << endl;
                    cin >> y;
                    prod->setAno(y);

                    cout << "Digite a classificacao etaria do Dvd" << endl;
                    cin >> y;
                    prod->setClassificacao(y);

                    cout << "Digite a duracao do filme, em minutos" << endl;
                    cin >> y;
                    prod->setDuracao(y);

                    midia.adicionar(prod);
                }

                else {
                    cout << "Indicação invalida" << endl;
                }
        }

        else if (resposta == 2){
            int resposta;
            string tit;
	    cout << "O que voce deseja apagar?" << endl;
	    cout << "Digite 1 para livros" << endl;
	    cout << "Digite 2 para CD" << endl;
            cout << "Digite 3 para DVD" << endl;
	    cin >> resposta;

	    cout << "Qual o titulo do que voce deseja apagar?" << endl;
	    cin >> tit;
	
	    if(resposta == 1){
	        midia.remover(tit, resposta);
	    }

	    else if  (resposta == 2){
	        midia.remover(tit, resposta);
	    }

	    else if (resposta == 3){
		midia.remover(tit, resposta);
	    }

	    else {
		cout << "Opcao invalida" << endl;
	    }

        }

        else if (resposta == 3){
            midia.modificar();
        }

        else if (resposta == 4){
            midia.mostrar();
        }

	else if (resposta == 5){
            midia.quantidade();
	}

        else {
            cout << "Resposta Invalida";
        }

        cout << "Deseja realizar um novo processo?" << endl;
        cout << "Digite 1 para sim e qualquer outra tecla para não" << endl;
        cin >> loop;
    }


    return 0;
}
