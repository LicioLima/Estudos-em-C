#include <stdio.h>
int main ()
{
    char x='F';
    char *ponteiro;
    ponteiro = &x; 
    printf("valor de x: %c\n", *ponteiro);
    getchar ();
    return 0;
               
}