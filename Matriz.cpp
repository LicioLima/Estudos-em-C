#include <stdio.h>
int main(void)
{
	int matriz [3][2] = {1, 4, 2, 5, 3, 6};
	printf("%i\n",matriz [0] [0]);
	printf("%i\n",matriz [1] [0]);
	printf("%i\n",matriz [2] [0]);
	printf("%i\n",matriz [0] [1]);
	printf("%i\n",matriz [1] [1]);
	printf("%i\n",matriz [2] [1]);
	printf("Tamanho do vetor: %i bytes", sizeof(matriz));
	getchar();
	return 0;
}