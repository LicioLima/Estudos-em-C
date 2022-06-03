#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *p = (int*) calloc(3,sizeof(int));
	*p = 10;
	*(p+1) = 20;
	p[2] = 30;
	printf("*p 	  :%i\n", *p);
	printf("*(p+1 :%i\n", *(p+1));
	printf("p[2]  :%i\n", p[2]);
	system("pause");
	return 0;
}