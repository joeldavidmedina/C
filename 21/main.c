//4.8. Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.

#include <stdio.h>

int main() {

    int nro1, nro2;

    printf("\ningrese dos numeros:");
    scanf("%d%d", &nro1, &nro2);

    if((nro1%nro2)==0)
        printf("\nel primer numero es divisible por el segundo.");
    else
        printf("\nel primer numero no es divisible por el segundo.");

    return 0;
}
