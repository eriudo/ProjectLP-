//DVD.cpp

#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace std;

Dvd::Dvd(){

}

Dvd::Dvd(string titulo, int lancamento,string diretor, int classificacao, int duracao){
		this -> titulo = titulo;
		this -> classificacao = classificacao;
		this -> duracao = duracao;
		this -> diretor = diretor;
		this -> lancamento = lancamento;
		this -> tipo = 3;
}
Dvd::~Dvd(){

}
ostream& operator << (ostream &o, Dvd &z){
	o << z.titulo << endl << z.lancamento << endl << z.diretor << endl << z.classificacao << endl << z.duracao << endl;
	return o;
	}

