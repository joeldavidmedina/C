//4.15. UN NEGOCIO DE ARTíCULOS DE COMPUTACIóN VENDE DVDS SEGúN LA SIGUIENTE ESCALA DE PRECIOS:
//• SUELTOS, ENTRE 1 Y 9 A $15 C/U.
//• LA CAJA DE 10 CUESTA $120.
//• LA CAJA DE 50 CUESTA $500.
//SI LA COMPRA EXCEDE LAS 100 UNIDADES SE EFECTúA UN DESCUENTO DEL 10%.
//NOTA: SE ACEPTAN COMPRAS ENTRE 1 Y 500 DVDS.
//SE PIDE QUE SE INGRESE UNA CANTIDAD DE DVDS QUE SE QUIERE COMPRAR Y CALCULE E INFORME EL IMPORTE A PAGAR.

#include <stdio.h>

int main()
{
    int cantidad, aux;
    float importe;

    do{
        printf("\ningrese la cantidad de DVDs a comprar:");
        scanf("%d", &cantidad);
    }while(cantidad<1 || cantidad>500);

    aux=cantidad;

    importe=(cantidad/50)*500;
    cantidad=cantidad-(50*(cantidad/50));
    importe=importe+(cantidad/10)*120;
    cantidad=cantidad-(10*(cantidad/10));
    importe=importe+cantidad*15;

    if(aux>100)//descuento
    {
        importe=importe-importe/10;
        printf("\ndescuento realizado por compra mayor a 100 unidades.");
    }

    printf("\nimporte final: %f", importe);

    return 0;
}
