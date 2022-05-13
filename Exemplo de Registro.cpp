#include <stdio.h>
#include <stdlib.h>
struct s_dados
{
    char nome [20];
};
int main()
{
    int i, qtd;
    printf ("Quantidade registros: ");
    scanf ("%d",&qtd);
    struct s_dados dados [qtd];
    for (i=0;i<qtd;++i)
    {
        printf("Nome: ");
         scanf (" %20[^\n]",&dados [i].nome);
   };
    system ("CLS");
    for (i=0;i<qtd;++i)
        printf("Nome: %s\n",dados [i].nome);
    system ("PAUSE");
    return 0;
                              
}