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
		    Livro *prod = new Livro();

                    string x;
                    int y;
	            long int z;
			
		    cout << "Digite o titulo do livro" << endl;
                    getline (cin,x);
                    prod->setTitulo(x);

		    cin.ignore();
                    cout << "Digite o(a) autor(a) do livro" << endl;
                    getline (cin,x);
                    prod->setResponsavel(x);

                    cout << "Digite o ano de lançamento do livro" << endl;
                    cin >> y;
                    prod->setAno(y);

                    cout << "Digite o ISBN do livro, apenas os numeros" << endl;
                    cin >> z;
                    prod->setISBN(z);

		    cin.ignore();
                    cout << "Digite a Editora do livro" << endl;
                    getline (cin,x);
                    prod->setEditora(x);

                    midia.adicionar(prod);

                }

		
                else if (produto == 2){ //CD
		    CD* prod = new CD;

		    prod->setFormato(2);

                    string x;
                    int y;
			
		    cin.ignore();
                    cout << "Digite o titulo do album" << endl;
                    getline (cin,x);
                    prod->setTitulo(x);

                    cout << "Digite o(a) compositor(a) do album" << endl;
                    getline (cin,x);
                    prod->setResponsavel(x);

                    cout << "Digite o ano de lançamento do album" << endl;
                    cin >> y;
                    prod->setAno(y);

                    cout << "Digite o numero de faixas do album" << endl;
                    cin >> y;
                    prod->setFaixa(y);

		    cin.ignore();
                    cout << "Digite a gravadora do album" << endl;
                    getline (cin,x);
                    prod->setGrava(x);

                    midia.adicionar(prod);
                }

		else if (produto == 3){ //DVD
		    string x, z;
                    int y, a, b;
			
		    cout << "Digite o titulo do filme" << endl;
		    getline (cin, x);

		    cin.ignore();
		    cout << "Digite o(a) diretor(a) do filme" << endl;
                    getline (cin,z);
                  
                    cout << "Digite o ano de lançamento do livro" << endl;
                    cin >> y;
                    
		    
		    cout << "Digite a classificacao do filme" << endl;
                    cin >> a;
                    

		    cout << "Digite a duracao do filme" << endl;
		    cin >> b;
		   
                    Dvd *prod  = new Dvd(x, z, y, b, a);

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
		
	    cin.ignore();
	    cout << "Qual o titulo do que voce deseja apagar?" << endl;
	    getline (cin, tit);
		
	
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
	    int resposta;
	    string tit;
	    cout << "Qual o tipo do livro que você deseja editar?" << endl;
	    cout << "Digite 1 para livros" << endl;
	    cout << "Digite 2 para CD" << endl;
            cout << "Digite 3 para DVD" << endl;
	    cin >> resposta;

	    cin.ignore();
	    cout << "Qual o titulo do que voce deseja apagar?" << endl;
	    getline (cin, tit);

	   if(resposta == 1){
	        midia.modificar(tit, resposta);
	    }

	    else if  (resposta == 2){
	        midia.modificar(tit, resposta);
	    }

	    else if (resposta == 3){
		midia.modificar(tit, resposta);
	    }

	    else {
		cout << "Opcao invalida" << endl;
	    } 
        }

        else if (resposta == 4){
            midia.mostrar();
        }

	else if (resposta == 5){
            midia.quantidade();
	}

        else {
            cout << "Resposta Invalida" << endl;
        }

        cout << "Deseja realizar um novo processo?" << endl;
        cout << "Digite 1 para sim e qualquer outra tecla para não" << endl;
        cin >> loop;
    }


    return 0;
}
