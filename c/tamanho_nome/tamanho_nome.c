#include <stdio.h>
#include <string.h>

int main () {
	char nome[80];
	int tamanho;
	
	/*
		Se voc� digitar espa�o ir� alterar o tamanho do comprimento
	*/
	
	printf("Digite o seu nome completo: \n");e
	gets(nome);
	
	tamanho = strlen(nome);
	
	printf("O comprimento do nome e: %d \n", tamanho);
	
	return 0;
}
