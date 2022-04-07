#include <stdio.h>
int i, numero, soma;
int main()
{
	while(i < 5)
	{
		printf("Informe o valor de %i: ", i);
		scanf("%i", &numero);
		soma += numero;
		i++;
	}
	printf("\Soma dos valores: %i\n\n", soma);
	return 0;
}