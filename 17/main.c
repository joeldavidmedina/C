//4.4. Ingresar 3 valores reales y:
//a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
//b. Si los tres son iguales informar “TRES IGUALES .
//c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.

#include <stdio.h>

int main() {

    float nro1, nro2, nro3;

    printf("\ningresar tres numeros reales:");
    scanf("%f%f%f", &nro1, &nro2, &nro3);

    if(nro1>nro3 && nro2>nro3)
        printf("\nMAYORES AL TERCERO.");

    if(nro1==nro2 && nro1==nro3)
        printf("\nTRES IGUALES.");

    if(nro1<nro3 || nro2<nro3)
        printf("\nALGUNO ES MENOR.");

    return 0;
}
