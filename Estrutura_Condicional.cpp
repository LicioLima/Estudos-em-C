#include <stdio.h>
int main()
{
	float nota1, nota2, media;
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("Informe a nota2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	if (media < 5)
		printf("Reprovado");
	else if (media < 7)
		printf("Recuperacao");
	else
		printf("Aprovado");
return 0;
}