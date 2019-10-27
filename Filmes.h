#ifndef FILMES_H
#define FILMES_H

#include <iostream>
#include "Catalogo.h"

using namespace std;

//FILE *ListaFilmes;
//ListaFilmes	= fopen("ListaFilmes.txt", r+)

class Filmes : Public Locadora{
	
		SFilmes filmes[Catalogo::get_filmesdisponiveis];
	
	public:
		
		Filmes(int);
		void adicionarfilme(string, string, string);
		//void set_nome(string);
		//void set_genero(string);
		//void set_datadelancamento(string);
		//string get_nome();
		//string get_genero();
		//string get_datadelancamento();
		
		
		//metodos simples
		bool ordenar_bubble(int); //ordenar por 1=Nome, 2=Genero, 3=Data de lançamento!
		bool ordenar_selection(int); //ordenar por 1=Nome, 2=Genero, 3=Data de lançamento!
	
		//Metodos Sofisticados	
		bool ordenar_shell(int);
		bool 
		
		
	
}



#endif