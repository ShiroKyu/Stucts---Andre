/* Declara��o do tipo dos dados e implementa��o das suas fun��es */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Funcionario.h"

/*Criar funcion�rio */

Funcionario *criaFunc(){
	Funcionario *criar = (Funcionario*) malloc(sizeof(Funcionario));
	if(criar){
		fflush(stdin);
		printf("Informe o nome do funcion�rio: "); gets(criar->nome);
		printf("Informe o sal�rio desse funcion�rio: "); scanf("%f",&criar->salario);
		fflush(stdin);
		printf("Informe o cargo desse funcion�rio: "); gets(criar->cargo);
		printf("\n");
		fflush(stdin);
	}
	return criar;
}


