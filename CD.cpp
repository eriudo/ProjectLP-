//Cd.cpp

#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace std;

CD::CD(){

}

CD::CD(string titulo, int lancamento, string compositor, string gravadora, int qtd_faixas){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> compositor = compositor;
		this -> gravadora = gravadora;
		this -> qtd_faixas = qtd_faixas;
		this -> tipo = 2;
}
CD::~CD(){

}
ostream& operator << (ostream &o, CD &z){
	o << z.titulo << endl << z.lancamento << endl << z.compositor << endl << z.gravadora << endl << z.qtd_faixas << endl;
	return o;
	}