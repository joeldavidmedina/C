//2.12. Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un programa que recibiendo el precio original
//y un código que indica si es o no con descuento, informe el precio final (0 no aplica el descuento y 1 aplica el descuento).

#include <stdio.h>

int main() {

    int descuento=20, codigo;
    float precio, preciofinal;

    printf("\ningrese precio del articulo: ");
    scanf("%f", &precio);

    printf("\ningrese codigo del articulo (0/1): ");
    scanf("%d", &codigo);

    if(codigo==1)
        preciofinal=precio-((descuento*precio)/100);
    else
        preciofinal=precio;

    printf("\nel precio final es: %f", preciofinal);

    return 0;

}
