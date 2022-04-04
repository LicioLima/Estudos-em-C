#include <stdio.h> //Lib para comandos padrões
#include <stdlib.h> //Necessário para o System
#include <math.h> //Necessário para o "fmod"
int main (void)
{
	int a=10, b=3;
	float c=10, d=3.0;
	printf("(Multiplicao) => %d * %d = %d \n", a, b, a * b);
	printf("(Divisao) => %d / %d = %d \n", a, b, a / b);
	printf("(Adicao) => %d + %d = %d \n", a, b, a + b);
	printf("(Subtracao) => %d - %d = %d \n", a, b, a - b);
	printf("(Resto) => %d %% %d = %d \n", a, b, a % b);
	printf("(Resto com reais) => fmod(%.1f, %.1f) = %.1f\n", c, d, fmod(c,d));
	printf("(potenciacao) => pow(%d,2) = %.f\n", a, pow(a,2));
	printf("\n");
	system("pause");
	return 0;
}
