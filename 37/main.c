//5.1.6 Ingresar N y N Números naturales. Determinar e informar:
//a. La sumatoria de los valores múltiplos de 3.
//b. La cantidad de valores múltiplos de 5.
//c. La sumatoria de los valores que se ingresan en orden par.

#include <stdio.h>

int main()
{
    int n, i, nro, suma=0, cont=0, suma2=0;

    printf("\ningrese la cantidad de numeros que va a ingresar: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("\ningrese numero entero:");
        scanf("%d", &nro);

        if(nro%3==0)//es multiplo de 3.
            suma+=nro;
        if(nro%5==0)//el multiplo de 5.
            cont++;
        if(i%2==0)//numero ingresados en orden par.
            suma2+=nro;
    }

    printf("\nla sumatoria de los numeros multiplos de 3 es: %d", suma);
    printf("\nla cantidad de numeros multiplos de 5 es: %d", cont);
    printf("\nla sumatoria de los numeros ingresados en orden par es: %d", suma2);

    return 0;
}
