//04
/* Arquivo .h: protótipos de funções, tipos de ponteiro, dados globalmente acessíveis */

/* Declaração da struct e novo tipo Funcionario */
typedef struct funcionario Funcionario;

struct funcionario {
	int registro;
	char nome[50];
	float salario;
	char cargo[50];
};


/* Função que cria um novo funcionário */

Funcionario *criaFunc(int registro, char nome[50], float salario, char cargo[50]);



