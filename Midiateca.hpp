#ifndef MIDIATECA_HPP
#define MIDIATECA_HPP

#include <iostream>
#include <string>
#include "Dados.hpp"
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
#include <vector>
using namespace std;

class Midiateca{
protected:
	vector<Dados*> armazenador;
	int quantidade_l;
	int quantidade_c;
	int quantidade_d;

public:
	 Midiateca();
	 Midiateca(Livro *livro1, Livro *livro2, Dvd *Dvd1, Dvd *Dvd2, CD *CD1, CD *CD2);
	

	void Inserir  (Dados *aux);
	void Remover  (string xyz, int abc);
	void Estatistica();	
	void Show();	

};


#endif