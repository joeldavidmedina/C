//4.14. La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente escala:
//    a. menor de $55 el descuento es del 4.5%
//b. entre $55 y $100 el descuento es del 8%
//c. más de $100 el descuento es del 10.5%
//Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con mensajes aclaratorios.

#include <stdio.h>

int main() {

    float importe, descuento, precioneto;

    printf("\ningrese importe:");
    scanf("%f", &importe);

    if(importe<55)
    {
        descuento=(4.5*importe)/100;
        precioneto=importe-descuento;

        printf("\nel descuento efectuado es: %f", descuento);
        printf("\nel precio neto es: %f", precioneto);
    }

    if(importe>=55 && importe<=100)
    {
        descuento=(8*importe)/100;
        precioneto=importe-descuento;

        printf("\nel descuento efectuado es: %f", descuento);
        printf("\nel precio neto es: %f", precioneto);
    }

    if(importe>100)
    {
        descuento=(10.5*importe)/100;
        precioneto=importe-descuento;

        printf("\nel descuento efectuado es: %f", descuento);
        printf("\nel precio neto es: %f", precioneto);
    }

    return 0;
}
