#include "Funcionario.h"
#define TRUE 1
#define FALSE 0

/* Definindo a estrutura da lista */
typedef struct lista_estatica Lista_Estatica;

struct lista_estatica {
	int qtd;
	Funcionario *func[];
};

/* Criando a lista */

Lista_Estatica *criarLista();

/* Adicionar funcion�rio */

Lista_Estatica *adicionaFunc(Lista_Estatica *li);

/* Verificador de registros, para ver se j� existe um funcion�rio com o registro atual */

int verificadorIdentificador(int registro, Lista_Estatica *li);

/* Remove um funcion�rio */

Lista_Estatica *removerFunc(Lista_Estatica *li);

/* Imprime os funcion�rios da lista */

void imprimir(Lista_Estatica *li);

/* Modificar funcion�rio */

Lista_Estatica *modificarFunc(Lista_Estatica *li);






