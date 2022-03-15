//4.13. Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000
//son defectuosos. Se desea confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no defectuoso. Los artículos del catálogo van desde
//el 1200 al 90000. Si se ingresa otro número informar “FUERA DE CATALOGO”.

#include <stdio.h>

int main() {

    int nro;

    printf("\ningrese numero de catalogo: ");
    scanf("%d", &nro);

    if(nro<1200 || nro>90000)
    {
        printf("\nFUERA DE CATALOGO.");
    }
    else
    {
        if((nro>=12121 && nro<=18081) || (nro>=30012 && nro<=45565) || (nro>=67000 && nro<=68000))
            printf("\nEL NUMERO DE CATALOGO PERTENECE A UN ARTICULO DEFECTUOSO.");
        else
            printf("\nEL NUMERO DE CATALOGO NO PERTENECE A UN ARTICULO DEFECTUOSO.");
    }

    return 0;
}
