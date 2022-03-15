//5.1.9 Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números impares en la primera y los 15 primeros pares en la segunda,
//incluyendo los títulos.

#include <stdio.h>

int main()
{
    int  i;
    printf("\nIMPARES   PARES");

    for(i=1; i<=30; i++)
    {
        if(i%2==0)//es par
            printf("\t%d", i);
        else
            printf("\n%d", i);
    }

    return 0;
}
