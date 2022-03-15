//5.1.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.

#include <stdio.h>

int main()
{

    int i, nro, cont=0, acum=0;
    float prom;

    for(i=0; i<5; i++)
    {
        printf("\ningrese un numero entero: ");
        scanf("%d", &nro);

        if(nro%2==0)
        {
            acum+=nro;
            cont++;
        }
    }

    prom=acum/cont;

    printf("\nla cantidad de numeroo pares ingresados es: %d", cont);
    printf("\nel promedio de los numeros pares ingresados es: %0.2f", prom);

    return 0;
}
