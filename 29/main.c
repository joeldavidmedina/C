//4.16. Un negocio vende distintos art?culos identificados por un c?digo, seg?n se muestra:
//? c?digo 1; 10; 100: 10 pesos la unidad.
//? c?digo 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
//? c?digo 3; 33: 3 pesos la unidad. Si la compra es por m?s de 10 unidades se hace un descuento del 10% sobre el total de la compra.
//? c?digo 4; 44: 1 peso la unidad.
//Confeccionar un programa que ingrese como dato el c?digo de un art?culo y la cantidad a comprar y se informe el importe de la compra, con las siguientes leyendas:
//ART?CULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx

#include <stdio.h>

int main() {

    int codigo, cantidad;
    float importe;

    printf("\ningrese el codigo del articulo: ");
    scanf("%d", &codigo);

    printf("\ningrese cantidad de articulos que desea comprar: ");
    scanf("%d", &cantidad);

    if(codigo==1 || codigo ==10 || codigo==100)
    {
        importe=cantidad*10;
    }
    if(codigo==2 || codigo==22 || codigo==222)
    {
        importe=(cantidad/10)*65;
        cantidad=cantidad%10;
        importe=importe+cantidad*7;
    }
    if(codigo==3 || codigo==33)
    {
        importe=cantidad*3;
        if(cantidad>10)
        {
            importe=importe-importe/10;//descuento del 10%
        }
    }
    if(codigo==4 || codigo==44)
    {
        importe=cantidad;
    }

    printf("\nARTICULO  %d  CANTIDAD    %d  IMPORTE A PAGAR $ %0.2f", codigo, cantidad, importe);

    return 0;
}
