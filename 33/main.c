//5.1.2 Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.

#include <stdio.h>

int main()
{
    int i, res=0;

    for(i=100; i>=50; i--)
    {
        if(i%5==0)
            res=res+i;
    }

    printf("\nresultado: %d", res);

    return 0;
}
