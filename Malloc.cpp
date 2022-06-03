#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *p = (int *) malloc(sizeof(int));
	printf("Endereco: i%\n", p);
	getchar();
	return 0;
}