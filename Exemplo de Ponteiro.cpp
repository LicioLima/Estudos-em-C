#include <stdio.h>
int main ()
{
    int x = 10;
    int *ponteiro;
    ponteiro = &x;
    printf("valor de x: %i\n", x);
    printf("End. de x: %i\n", &x);
    printf("&ponteiro:%i\n", &ponteiro);
    printf("ponteiro :%i\n", ponteiro);
    printf("*ponteiro:%i\n", *ponteiro);
    getchar ();
    return 0;      
}