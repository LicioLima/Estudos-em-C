#include <stdio.h>
int main(void)
{
	char nome[] = "Recife";
	printf("nome[0] = %c\n", nome[0]);
	printf("nome[0] = %c\n", nome[1]);
	printf("nome[0] = %c\n", nome[2]);
	printf("nome[0] = %c\n", nome[3]);
	printf("nome[0] = %c\n", nome[4]);
	printf("nome[0] = %c\n", nome[5]);
	printf("\n%s tem %i caracteres\n", nome, sizeof(nome)-1);
	return 0;
}