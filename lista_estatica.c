//Arquivo .c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lista_estatica.h"
//03
//Criar lista

Lista_Estatica *criarLista(){
	Lista_Estatica *li = (Lista_Estatica*) malloc(sizeof(Lista_Estatica));
	if(li){
		li->qtd = 0;
	}
	return li;
}

// Adiciona funcionário na lista

Lista_Estatica *adicionaFunc(int registro, char nome[50], float salario, char cargo[50], Lista_Estatica *li){
	Funcionario *func = criaFunc(registro, nome, salario, cargo);
	
	li -> func[registro] = func;
	li -> qtd = ++registro;
	return li;
}

// Remove um funcionário da lista

Lista_Estatica *removerFunc(int registro, Lista_Estatica *li){
	free(li->func[registro]);
	li->func[registro] = NULL;
	return li;
}

// Imprimir um funcionário da lista

void imprimir(int registro, Lista_Estatica *li){
	printf("Registro: %d\n",li->func[registro]->registro);
	printf("Nome: %s\n",li->func[registro]->nome);
	printf("Salario: %d\n",li->func[registro]->salario);
	printf("Cargo: %s\n",li->func[registro]->cargo);
}

// Modificar um funcionário da lista

void modificarFunc(int registro){
	int opcao = 0;
	printf("Informe o que deseja modificar:\n");
	printf("[1] - Nome\n");
	printf("[2] - ");
	
}



