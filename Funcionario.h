/* Arquivo .h: prot�tipos de fun��es, tipos de ponteiro, dados globalmente acess�veis */

/* Declara��o da struct e novo tipo Funcionario */
typedef struct funcionario Funcionario;

struct funcionario {
	int registro;
	int identificador;
	char nome[50];
	float salario;
	char cargo[50];
};

/* Fun��o que cria um novo funcion�rio */

Funcionario *criaFunc();



