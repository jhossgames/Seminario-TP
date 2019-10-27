#ifndef CATALOGO_H
#define CATALOGO_H

struct SFilmes{
	string nome;
	string genero;
	string datalancamento;
}

struct SJogos{
	string nome;
	string genero;
	string datalancamento;
}


class Catalogo{

	int filmesdisponiveis;
	int jogosdisponiveis;
	
	public:
		Catalogo(int=0, int=0);
		int get_filmesdisponiveis();
		int get_jogosdisponiveis();
	
	
}



#endif


//COISAS PARA LEMBRAR:
//*Qualquer filme para alugar tem o mesmo preço.
//*Todos os metodos que estão comentados podem ser retirados ou serão revisados em um futuro proximo.