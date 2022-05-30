#include<stdio.h>
#include<stdlib.h>
#define MAX 3
typedef struct
{
    char nome[3][20];
}s_filiacao;
typedef struct
{
    char nome[20];
    int fone[10];
    s_filiacao filiacao;
}s_cliente;

int main(void) 
{
    s_cliente cliente[MAX];
    int i;
    for(i=0;i<MAX;i++)
    {
         printf("Ficha: %d\n",i+1);
         printf("Nome: ");
         scanf("$20[^\n]",&cliente[i].nome);
         printf("Fone: ");
         scanf("$10[^\n]",&cliente[i].fone);
         printf("Pai: ");
         scanf("%20[^\n]",&cliente[i].filiacao.nome[0]);
         printf("Mae: ");
         scanf("%20[^\n]",&cliente[i].filiacao.nome[1]);
         system("cls");
    };
    for(i=0;i<MAX;i++)
    {
         printf("Ficha: %d\n",i+1);
         printf("-----------------------------------------------\n");
         printf("Nome: %s\n",cliente[i].nome);
         printf("Fone: %s\n",cliente[i].nome);
         printf("Pai: %s\n",cliente[i].filiacao.nome[0]);
         printf("Mae: %s\n",cliente[i].filiacao.nome[1]);
         printf("-----------------------------------------------\n");
    };
    system("pause");
    return 0;
	
}