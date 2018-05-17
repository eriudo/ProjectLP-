#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace std;


Midiateca::Midiateca(){

}

Midiateca::Midiateca(Livro *livro1, Livro *livro2, Dvd *Dvd1, Dvd *Dvd2, CD *CD1, CD *CD2){
	Inserir(livro1);
	Inserir(livro2);
	Inserir(CD1);
	Inserir(CD2);
	Inserir(Dvd1);
	Inserir(Dvd2);
	quantidade_l = 2;
	quantidade_c = 2;
	quantidade_d = 2;

}


void Midiateca::Inserir(Dados *aux){
	vector<Dados*>::iterator fiscal;
	int x = 0;
	for (fiscal = armazenador.begin(); fiscal != armazenador.end(); fiscal++){
		if ((*fiscal)->getTitulo().compare(aux->getTitulo()) == 0 && (aux->getTipo() ==  (*fiscal) -> getTipo()))
		{
			cout << (" ERRORRRRRRRR ") << endl;
			fiscal = armazenador.end();
			x = 1;
		}
	}

	if (x == 0){
		armazenador.push_back(aux);

	switch (aux->getTipo()){
		case 1:
		{
			quantidade_l++;
			break;
		}	
		case 2:
		{
			quantidade_c++;
			break;
		}
		case 3:
		{
			quantidade_d++;	
			break;	
		}
		}
	}
}
    void Midiateca::Remover(string xyz, int abc){
    vector<Dados*>::iterator remove;
    int y = 0;
    int i = 0;
    for (remove = armazenador.begin();  remove != armazenador.end(); remove++){
		if ((*remove)->getTitulo().compare(xyz) == 0 && abc ==  (*remove) -> getTipo()){
			armazenador.erase(armazenador.begin()+i);
			y = 1;
			i--;
		switch ((*remove)->getTipo()){
		case 1:
		{
			quantidade_l--;
			break;
		}
		case 2:
		{
			quantidade_c--;
			break;
		}
		case 3:
		{
			quantidade_d--;	
			break;	
		}
		}	
	}
		
		i++;
}

	if (y == 0){
		cout << ("Nao existe esse item") << endl;
		
	}
    
}
	void Midiateca::Estatistica (){
		cout << "livros cadastrados: " << quantidade_l << endl;
		cout << "Cds cadastrados: " << quantidade_c << endl;
		cout << "Dvds cadastrados: " << quantidade_d << endl;
	}


	void Midiateca::Show (){
		vector<Dados*>::iterator ver;
		int contador = 0;
		for (ver = armazenador.begin();  ver != armazenador.end(); ver++){ 
			switch ((*ver) -> getTipo()){
				case 1:{
					Livro *produto = (Livro*) (armazenador[contador]);
					cout << *produto << endl;
					break;
				}
				case 2: {
					CD *produto = (CD*) (armazenador[contador]);
					cout << *produto << endl;
					break;

				}
				case 3: {
					Dvd *produto = (Dvd*) (armazenador[contador]);
					cout << *produto << endl;
					break;
				}

			}
			contador++;
	}
}
	/*void Midiateca::Editar(Dados *aux){
    vector<Dados*>::iterator editor;
    for (editor = armazenador.begin();  editor != armazenador.end(); editor++){
		if (strcmp (aux->getTitulo() , (*remove)->getTitulo()) == 0 ){
		
			y = 1;
		}


	}

	if (y == 0){
		cout << ("Nao existe esse item") << endl;
		armazenador.push_back(aux);
	}
    
}*/



