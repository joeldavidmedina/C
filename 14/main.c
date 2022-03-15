//4.1. Se ingresan 3 números distintos. Determinar el mayor.

#include <stdio.h>

int main() {

    int nro1, nro2, nro3;

    printf("\ningrese 3 numeros: ");
    scanf("%d%d%d", &nro1, &nro2, &nro3);

    if(nro1>nro2 && nro1>nro3)
        printf("\nel numero mayor de los ingresados es: %d", nro1);
    else {
      if(nro2>nro1 && nro2>nro3)
            printf("\nel numero mayor de los ingresados es: %d", nro2);
        else
            printf("\nel numero mayor de los ingresados es: %d", nro3);
    }

    return 0;

}
