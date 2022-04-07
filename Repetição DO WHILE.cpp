#include <stdio.h>
int i, numero, soma;
int main()
{
	do
	{
		printf("Informe o valor de %i: ", i);
		scanf("%i", &numero);
		soma += numero;
		i++;
	}
	while (i <= 5);
	printf("\Soma dos valores: %i\n\n", soma);
	return 0;
}