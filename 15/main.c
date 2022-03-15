//4.2. Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que los otros dos.

#include <stdio.h>

int main() {

    int nro1, nro2, nro3;

    printf("\ningrese tres numeros:");
    scanf("%d%d%d", &nro1, &nro2, &nro3);

    if(nro1>nro2 && nro1>nro3)
        printf("\nel primer numero es mayor a los otros dos.");
    else
        printf("\nel primer numero no es mayor a los otros dos.");

    return 0;

}
