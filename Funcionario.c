//05
/* Declara��o do tipo dos dados e implementa��o das suas fun��es */

#include <stdlib.h>
#include <string.h>
#include "Funcionario.h"

/*Criar funcion�rio */

Funcionario *criaFunc(int registro, char nome[50], float salario, char cargo[50]){
	Funcionario *criar = (Funcionario*) malloc(sizeof(Funcionario));
	if(criar){
		criar -> registro = registro;
		strcpy(criar->nome, nome);
		criar -> salario = salario;
		strcpy(criar->cargo, cargo);
	}
	return criar;
}


