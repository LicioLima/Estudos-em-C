#include <stdio.h>
int main()
{
	float nota1, nota2, media;
	printf("informe a nota 1: ");
	scanf("%f", &nota1);
	printf("informe a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf(media<5 ? "Reprovado!" : media < 7 ? "Recuperacao!" : "Aprovado!");
	return 0;
}