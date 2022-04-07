#include <stdio.h>
int i, numero, soma;
int main()
{
	for (i = 1; i <= 5; i++)
	{
		printf("Informe o valor %i: ", i);
		scanf("%i", &numero);
		soma += numero;
	}
	printf("\Soma dos valores: %i\n\n", soma);
	return 0;
}