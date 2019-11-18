//05
/* Declaração do tipo dos dados e implementação das suas funções */

#include <stdlib.h>
#include <string.h>
#include "Funcionario.h"

/*Criar funcionário */

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


