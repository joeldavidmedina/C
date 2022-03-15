//4.6. Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor valor y su número de orden.
//Informe los valores ingresados e identifique al menor con mensaje aclaratorio.

#include <stdio.h>

int main() {

    int nro1, nro2, nro3, nro4;
    int menor, orden;

    printf("\ningrese 4 numeros enteros:");
    scanf("%d%d%d%d", &nro1, &nro2, &nro3, &nro4);

    if(nro1<nro2 && nro1<nro3 && nro1<nro4)
    {
        menor=nro1;
        orden=1;
    }
    if(nro2<nro1 && nro2<nro3 && nro2<nro4)
    {
        menor=nro2;
        orden=2;
    }
    if(nro3<nro1 && nro3<nro2 && nro3<nro4)
    {
        menor=nro3;
        orden=3;
    }
    if(nro4<nro1 && nro4<nro2 && nro4<nro3)
    {
        menor=nro4;
        orden=4;
    }

    printf("\nlos numeros ingresados son: %d    %d  %d  %d", nro1, nro2, nro3, nro4);
    printf("\nel numero menor ingresado fue: %d \nen el orden: %d", menor, orden);

    return 0;
}
