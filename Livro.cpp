//Livro.cpp

#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace std;

Livro::Livro(){

}

Livro::Livro(string titulo, int lancamento, string autor, string editora, long int ISBN){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> autor = autor;
		this -> ISBN = ISBN;
		this -> editora = editora;
		this -> tipo = 1;
}
Livro::~Livro(){

}

ostream& operator << (ostream &o, Livro &z){
	o << z.titulo << endl << z.lancamento << endl << z.autor << endl << z.ISBN << endl << z.editora << endl;
	return o;

}