#include <iostream>
#include <string>
#include "Dados.hpp"
#include <vector>
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
using namespace std;

Dados::Dados(){

}

Dados::Dados(string titulo, int lancamento, int tipo){
		this -> titulo = titulo;
		this -> lancamento = lancamento;
		this -> tipo = tipo;
		
}
Dados::~Dados(){
}
string Dados::getTitulo(){
	return titulo;
}
int Dados::getTipo(){
	return tipo;
}