#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
	char letra = 'A';
	printf("O código ASCII %i = %c", letra, letra);
	return 0;
}