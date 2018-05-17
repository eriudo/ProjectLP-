#ifndef DVD_HPP
#define DVD_HPP
#include "Dados.hpp"
#include <iostream>
#include <string>
using namespace std;

class Dvd: public Dados {

protected:

	int classificacao, duracao;
	string diretor;


public:
	Dvd();
	Dvd(string titulo, int lancamento,string diretor, int classificacao, int duracao);
	~Dvd();
	friend ostream& operator << (ostream &o, Dvd &z);
};

#endif