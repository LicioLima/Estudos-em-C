#include <stdio.h>
int verifica (int n1, int n2, int *soma, int *produto);
int main ()
{
    int n1 = 10, n2 = 10, s = 0, p = 0;
    printf("Valor de Retorno: %i\n\n",verifica (n1, n2, &s, &p));
    printf("Soma=%i\n\n",s);
    printf("Produto=%i\n\n",p);
    getchar ();
    return 0;
                 
}
int verifica (int n, int n2, int *soma, int *produto)
{
    printf("n1: %i\n\n",n1);
    printf("n2: %i\n\n",n2);
    *soma = (n1 + n2);
    *produto = (n1 * n2);
    if (n1==n2)
       return 0;
    else
       if (nl>n2)
          return 1;
       else
          return 2;
}