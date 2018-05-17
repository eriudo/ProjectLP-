#include <iostream>
#include <string>
#include "Dados.hpp"
#include "Midiateca.hpp"
#include "Livro.hpp"
#include "CD.hpp"
#include "Dvd.hpp"
#include <vector>
using namespace std;

void cadastre (Midiateca &Estante){
	string nome, criador, edi;
	int ano,numero,classi;

	int cadastro = 0;
		cout << ("Oi amigx bem vindx a sua midiateca digite o valor do produto que deseja cadastrar: 1- Livro; 2- CD; 3- Dvd; 0- Sair") << endl;
		cin  >> cadastro;
switch (cadastro){
		case 1:
		{
			cout << ("Digite o titulo do livro que voce deseja cadastrar, ano de lancamento, autor, editora e o IBSN, nessa ordem:") << endl ;
			cin.ignore();
			getline (cin,nome);
			cin >> ano; 
			cin.ignore();
			getline(cin, criador);
			cin.ignore();
			getline(cin,edi);
			cin >> numero; 
			Livro* livrinho = new Livro(nome, ano, criador, edi, numero);
			Estante.Inserir (livrinho);  
			break;
		}
		case 2:
		{
			cout << ("Digite o titulo do CD que voce deseja cadastrar, ano de lancamento, compositor, gravadora e a quantidade de faixas, nessa ordem:") << endl ;
			cin.ignore();
			getline (cin,nome);
			cin >> ano ;
			cin.ignore();
			getline(cin, criador);
			cin.ignore();
			getline(cin,edi);
			cin >> numero;
			CD* cd = new CD (nome, ano, criador, edi, numero);
			Estante.Inserir (cd);  
			break; 
		}
		case 3:
		{
			cout << ("Digite o titulo do Dvd que voce deseja cadastrar, ano de lancamento, Diretor, classificação e a duracao, nessa ordem:") << endl ;
			cin.ignore();
			getline (cin,nome);
			cin >> ano ;
			cin.ignore();
			getline(cin, criador);
			cin.ignore();
			getline(cin,edi);
			cin >> classi;
			cin >> numero;
			Dvd* dvd = new Dvd(nome, ano, criador, classi , numero);
			Estante.Inserir (dvd);  
			break;
		}
	}
	
}

void rmv (Midiateca &Estante){
	string nome, criador, edi;

	int cadastro = 0;
		cout << ("Oi amigx bem vindx a sua midiateca digite o valor do produto que deseja remover, em seguida seu titulo: 1- Livro; 2- CD; 3- Dvd; 0- Sair") << endl;
		cin  >> cadastro;
switch (cadastro){
		case 1:
		{
			cin.ignore();
			getline (cin,nome);
			Estante.Remover (nome,cadastro);  
			cout << ("O livro foi removido com sucesso") << endl ;  
			break;
		}
		case 2:
		{
			cin.ignore();
			getline (cin,nome);
			Estante.Remover (nome,cadastro);  
			cout << ("O CD foi removido com sucesso") << endl ; 
			break;
		}
		case 3:
		{
			cin.ignore();
			getline (cin,nome);
			Estante.Remover (nome,cadastro);   
			cout << ("O Dvd foi removido com sucesso") << endl ;
			break;
		}		
		}
	}	





int main()
{
	int loop = 1;
	int registro;
	

	Livro *livro1 = new Livro ("Deuses Americanos", 2016, "Neil Gaiman", "Intrinseca", 8551000721);
	Livro *livro2 = new Livro ("O Cavaleiro dos Setes Reinos", 2015, "George R R Martin", "LeYa", 8580448786);

	CD *CD1 = new CD ("Lust for Life", 2017, "Lana Del Rey", "Interscope Records", 16);
	CD *CD2 = new CD ("ANTI", 2016, "Rihanna", "Westbury Road Entertainment", 13);

	Dvd *Dvd1 = new Dvd ("Bladerunner 2049", 2017 , "VILLENEUVE, DENIS", 14, 164);
	Dvd *Dvd2 = new Dvd ("Slashers", 1981 , "HILTZIK, ROBERT",18, 359);
	Midiateca Estante = Midiateca (livro1, livro2, Dvd1, Dvd2, CD1, CD2);


	while(loop == 1){
cout << ("Oi amigx bem vindx a sua midiateca digite o que deseja fazer: 1- Cadastrar; 2- Remover; 3- Editar; 4- Ver Acervo; 5- Ver Estatisticas;") << endl;
	cin >> registro;
switch (registro){
		case 1:
		{
			cadastre (Estante);
			break;
		}
		case 2:
		{
			rmv (Estante);
			break;
		}	
		case 3:
		{
			//edit (Estante);
			//loop = 0;
			break;
		}			
		case 4:
		{
			cout << ("O seu acervo no momento é este:") << endl ; 
			Estante.Show();
			break;
		}
		case 5:
		{

			cout << ("As estatísticas do seu acervo sao a seguinte:") << endl ;
			Estante.Estatistica();			  
			break;
		}	
		
	}
	cout << "Deseja continuar na sua midiateca? 1 - para continuar, 0- para sair" << endl;
	cin >> loop;
}	

	return 0;
}


