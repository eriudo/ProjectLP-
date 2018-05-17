#ifndef CD_HPP
#define CD_HPP

#include <iostream>
#include <string>
#include "Dados.hpp"
using namespace std;

class CD: public Dados {
protected:

	string compositor, gravadora; 
	int qtd_faixas;

public:
	CD();
	CD(string titulo, int lancamento, string compositor, string gravadora, int qtd_faixas);
   ~CD();
   friend ostream& operator << (ostream &o, CD &z);
};

#endif