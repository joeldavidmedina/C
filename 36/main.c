//5.1.5 Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo solicita por teclado el programa.

#include <stdio.h>

int main()
{
    int i, n, suma=0;

    printf("\ningrese la cantidad de numeros que va a ingresar:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        suma+=i;
    }

    printf("\nla suma de los primero %d numero naturales es: %d", n, suma);

    return 0;
}
