#include <stdio.h>
int main()
{
	char dia [7] [4] = {"DOM", 
						"SEG", 
						"TER", 
						"QUA", 
						"QUI", 
						"SEX", 
						"SAB"};
	printf("Dia: %s\n", dia[3]);
	getchar();
	return 0;
}