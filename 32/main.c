//5.1.1 Mostrar por pantalla los números pares comprendidos entre 100 y 500.

#include <stdio.h>

int main()
{

    int i;

    for(i=100; i<=500; i++)
    {
        if(i%2==0)
            printf("\n%d", i);
    }

    return 0;
}
