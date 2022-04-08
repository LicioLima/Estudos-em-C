#include <stdio.h>
int main(void)
{
	int vetor[5] = {1, 2, 3, 4, 5}, i;
	for(i = 0; i < 5; i++)
	{
		printf("%i\n", vetor[i]);
	}
	printf("Tamanho do vetor: %i elementos.", sizeof(vetor)/sizeof(int));
	getchar();
	return 0;
}