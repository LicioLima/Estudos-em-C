#include <stdio.h>
int main(void)
{
	int vetor[1],*v;
    v=vetor;
    v[0] = 123;
    printf ("vetor  = 	 %d\n",   vetor);
    printf ("&vetor = 	 %d\n",  &vetor);
    printf ("&vetor[0] = %d\n",  &vetor);
    printf ("v 			= %d\n", &vetor);
    printf ("&v = %d\n", 	  &vetor[0]);
    printf ("&v[0] %d\n",         &v[0]);
    getchar ();
    return 0;
	return 0;
}           
                          
                          
                          
                          
                          