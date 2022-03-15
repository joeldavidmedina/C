//4.13. Un fabricante de repuestos para tractores ha descubierto que ciertos art�culos identificados por los n�meros de cat�logo 12121 al 18081; 30012 al 45565 y 67000 al 68000
//son defectuosos. Se desea confeccionar un programa al que inform�ndole el n�mero de cat�logo indique si el art�culo es o no defectuoso. Los art�culos del cat�logo van desde
//el 1200 al 90000. Si se ingresa otro n�mero informar �FUERA DE CATALOGO�.

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
