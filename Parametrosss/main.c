#include <stdio.h>
#include <stdlib.h>

//Parâmetros com valor e por referência

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

//função

int soma(int a, int b)
{
	return(a+b);
}

//tipagem NOME argumento ( )
//Bloco

//Parâmetro por referencia(endereço) da dados
//com o * pegamos oendereço da variável
//sem o * pegamos o valor da váriável
int somaReferencia(int  *a, int b)
{
	return *a+b;
}
