//2.7. Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.

#include <stdio.h>

int main() {

    int nro;
    int centenas=0, decenas=0, unidades=0;

    printf("\n ingrese un numero entero:");
    scanf("%d",&nro);

    while(nro>=100) {
        nro=nro-100;
        centenas++;
    }

    while(nro>=10) {
        nro=nro-10;
        decenas++;
    }

    unidades=nro;

    printf("\nla cantidad de centenas son: %d",centenas);
    printf("\nla cantidad de decenas son: %d", decenas);
    printf("\nla cantidad de unidades son: %d", unidades);

    return 0;
}
