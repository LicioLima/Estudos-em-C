#include <stdio.h>
int main(void)
{
	int vetor[5] = {1,2,3,4,5};
	printf("%i\n", vetor[0]);
	printf("%i\n", vetor[1]);
	printf("%i\n", vetor[2]);
	printf("%i\n", vetor[3]);
	printf("%i\n", vetor[4]);
	printf("Tamanho do vetor: %i bytes.", sizeof(vetor));
	getchar();
	return 0;
}