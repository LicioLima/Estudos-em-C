#include <stdio.h>
int main()
{
	int x = 10;
	int *ponteiro;
	ponteiro = &x;
	int y = 20;
	printf("x: %i\ny: %i", x, y);
	getchar();
	return 0;
}