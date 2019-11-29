//Autor - Paulo S�rgio

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estatica.h"

int main(){
	setlocale(LC_ALL,"");
	
	Lista_Estatica *li = criarLista();
	int opcao = 0;
	int k;
	
	printf("==== Programa para cadastro de funcion�rios ====\n\n");
	
	while(opcao != 6){
		printf("Informe o que deseja fazer:\n");
		printf("[1] - Cadastrar um novo funcion�rio\n");
		printf("[2] - Remover um funcion�rio\n");
		printf("[3] - Modificar um funcion�rio\n");
		printf("[4] - Imprimir todos os funcion�rios\n"); 
		printf("[5] - Buscar um funcion�rio\n");
		printf("[6] - Sair "); scanf("%d",&opcao);
		printf("\n");
		
		switch(opcao){
			case 1:
				li = adicionaFunc(li);
				printf("Funcion�rio cadastrado com sucesso!\n\n");
				break;
			
			case 2:
				li = removerFunc(li);
				printf("Funcion�rio removido com sucesso!\n\n");
				break;
			
			case 3:
				li = modificarFunc(li);
				printf("As altera��es foram conclu�das!\n\n");
				break;
			
			case 4:
				for(k=0; k<li->qtd; k++){
					imprimir(li, k);
				}
				break;
			
			case 5:
				buscaFunc(li);
				break;
				
			case 6:
				break;
				
			default:
				break;
		}
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
