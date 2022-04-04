#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=10, y=5, z;
	printf("x = %d\n\n", x);
	z = x-- + y;
	printf("y = %d\n\n", y);
	printf("z = x-- + y = %d\n\n", z);
	printf("x = %d\n\n", x);
	system("pause");
	return 0;
}