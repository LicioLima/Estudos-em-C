#include <stdio.h>
int main()
{
	int x = 10;
	printf("x = %d\n\n", x);
	printf("x *= 2 %d\n\n", x*=2);
	printf("x /= 2 %d\n\n", x/=2);
	printf("x += 2 %d\n\n", x+=2);
	printf("x -= 2 %d\n\n", x-=2);
	return 0;
}