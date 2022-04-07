#include <stdio.h>
int i=1, numero, soma;
int main()
{
	do
	{
		printf("Informe o valor %i: ", i+1);
		scanf("%i", &numero);
		if (numero==0);
			break;
		soma += numero;
		i++;
	}
	while (i <= 5);
	printf("\Soma dos valores: %i\n\n", soma);
	return 0;
}