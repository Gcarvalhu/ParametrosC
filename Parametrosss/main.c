#include <stdio.h>
#include <stdlib.h>

//Par�metros com valor e por refer�ncia

int main(int argc, char *argv[]) {
	imprimir(6);
	
	int x= soma(5,3);
	printf("\n resultado deu: %d", x);
	return 0;
}


void imprimir(int a)
{
	int d=0;
	for(d=0; d< a;d++)
		printf("\n Oi   - %d", d);
}

//fun��o

int soma(int a, int b)
{
	return(a+b);
}

//tipagem NOME argumento ( )
//Bloco

//Par�metro por referencia(endere�o) da dados
//com o * pegamos oendere�o da vari�vel
//sem o * pegamos o valor da v�ri�vel
int somaReferencia(int  *a, int b)
{
	return *a+b;
}
