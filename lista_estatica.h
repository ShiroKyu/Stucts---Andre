//02
#include "Funcionario.h"
#define TAM 5

/* Definindo a estrutura da lista */
typedef struct lista_estatica Lista_Estatica;

struct lista_estatica {
	int qtd;
	Funcionario *func[];
};

/* Criando a lista */

Lista_Estatica *criarLista();

/* Adicionar funcionário */

Lista_Estatica *adicionaFunc(int registro, char nome[50], float salario, char cargo[50], Lista_Estatica *li);

/* Remove um funcionário */

Lista_Estatica *remover(int registro, Lista_Estatica *li);

/* Imprime um funcionário */

void imprimir(int registro, Lista_Estatica *li);

/* Modificar funcionário */

void modificarFunc(int registro, Lista_Estatica *li);





