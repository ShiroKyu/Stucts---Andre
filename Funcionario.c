/* Declaração do tipo dos dados e implementação das suas funções */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Funcionario.h"

/*Criar funcionário */

Funcionario *criaFunc(){
	Funcionario *criar = (Funcionario*) malloc(sizeof(Funcionario));
	if(criar){
		fflush(stdin);
		printf("Informe o nome do funcionário: "); gets(criar->nome);
		printf("Informe o salário desse funcionário: "); scanf("%f",&criar->salario);
		fflush(stdin);
		printf("Informe o cargo desse funcionário: "); gets(criar->cargo);
		printf("\n");
		fflush(stdin);
	}
	return criar;
}


