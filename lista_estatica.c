//Arquivo .c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "lista_estatica.h"

//Criar lista

Lista_Estatica *criarLista(){
	Lista_Estatica *li = (Lista_Estatica*) malloc(sizeof(Lista_Estatica));
	if(li){
		li->qtd = 0;
	}
	return li;
}

// Adiciona funcionário na lista

Lista_Estatica *adicionaFunc(Lista_Estatica *li){
	Funcionario *func = criaFunc();
	
	srand(time(NULL));

	while(verificadorIdentificador(rand() % 1000000, li) == FALSE)
		srand(time(NULL));
		
	func -> identificador = rand() % 1000000;
	func -> registro = li->qtd;
	li -> func[li->qtd] = func;
	li -> qtd++;
	return li;
}

/* Verificador */

int verificadorIdentificador(int registro, Lista_Estatica *li){
	int k;
	
	for(k=0; k<li->qtd; k++){
		if(registro == li->func[k]->registro){
			return FALSE; //Se já existir um registro igual, retorna FALSE
		}
	}
	return TRUE;
}

// Remove um funcionário da lista

Lista_Estatica *removerFunc(Lista_Estatica *li){
	int registro;
	
	printf("Informe o registro do funcionário a ser removido ou cancele a operação com \"-1\": "); scanf("%d",&registro);
	printf("\n");
	if(registro == -1){
		return li;
	}
	
	free(li->func[registro]);
	li->func[registro] = NULL;
	return li;
}

// Imprimir um funcionário da lista

void imprimir(Lista_Estatica *li){
	int k;
	
	for(k=0; k<li->qtd; k++){
		printf("Funcionário:\n\n");
		printf("Registro: %d\n",li->func[k]->registro);
		printf("Identificador: %d\n",li->func[k]->identificador);
		printf("Nome: %s\n",li->func[k]->nome);
		printf("Salario: R$%.2f\n",li->func[k]->salario);
		printf("Cargo: %s\n\n",li->func[k]->cargo);
	}
}

// Modificar um funcionário da lista

Lista_Estatica *modificarFunc(Lista_Estatica *li){
	int opcao = 0;
	int registro;
	
	printf("Informe o registro do funcionário a ser removido ou cancele a operação com \"-1\": "); scanf("%d",&registro);
	printf("\n");
	if(registro == -1){
		return li;
	}
	
	while(opcao != 4){
		printf("Informe o que deseja modificar:\n");
		printf("[1] - Nome\n");
		printf("[2] - Salario\n");
		printf("[3] - Cargo\n"); 
		printf("[4] - Fechar\n"); scanf("%d",&opcao);
	
		switch(opcao){
			case 1:
				fflush(stdin);
				printf("Informe o novo nome: "); gets(li->func[registro]->nome);
				break;
			case 2:
				fflush(stdin);
				printf("Informe o novo salário: "); scanf("%f",&li->func[registro]->salario);
				break;
			case 3:
				fflush(stdin);
				printf("Informe o novo cargo: "); gets(li->func[0]->cargo);
				break;
			case 4:
				break;
		}
	}
	
	return li;
}



