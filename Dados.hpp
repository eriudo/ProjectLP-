#ifndef DADOS_HPP
#define DADOS_HPP

#include <iostream>
#include <string>
using namespace std;

class Dados {
protected:

	string titulo; 
	int lancamento;
	int tipo;

public:
	Dados();
	Dados(string titulo, int lancamento, int tipo);
   ~Dados();
   string getTitulo();
   int getTipo();

};

#endif