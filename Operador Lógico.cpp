#include <stdio.h>
#include <ctype.h> //permite o uso de toupper e tolower
int main()
{
	char sexo;
	int tempo;
	printf("Informe o sexo M/F: ");
	scanf("%c", &sexo);
	printf("Informe o tempo em anos: ");
	scanf("%i", &tempo);
	sexo = toupper(sexo);
	if (sexo=='M' && tempo>=35 || sexo=='F' && tempo>=25)
		printf("Aposentado(a)!");
	else
		printf("Na ATIVA!");
	return 0;
}