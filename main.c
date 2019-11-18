//01
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "lista_estatica.h"

int main(){
	setlocale(LC_ALL,"");
	
	Lista_Estatica *li = criarLista();
	
	system("PAUSE");
	return 0;
}
