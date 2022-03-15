//4.5. Se ingresan 3 números enteros. Informarlos en orden creciente.

#include <stdio.h>

int main() {

    int nro1, nro2, nro3;

    printf("\ningrese tres numeros enteros:");
    scanf("%d%d%d", &nro1, &nro2, &nro3);

    if(nro1> nro2 && nro1>nro3)
    {
        printf("\n%d", nro1);
        if(nro2>nro3)
        {
            printf("\n%d", nro2);
            printf("\n%d", nro3);
        }
        else
        {
            printf("\n%d", nro3);
            printf("\n%d", nro2);
        }
    }

    if(nro2>nro1 && nro2>nro3)
    {
        printf("\n%d", nro2);
        if(nro1>nro3)
        {
            printf("\n%d", nro1);
            printf("\n%d", nro3);
        }
        else
        {
            printf("\n%d", nro3);
            printf("\n%d", nro1);
        }
    }

    if(nro3>nro1 && nro3>nro2)
    {
        printf("\n%d", nro3);
        if(nro1>nro2)
        {
            printf("\n%d", nro1);
            printf("\n%d", nro2);
        }
        else
        {
            printf("\n%d", nro2);
            printf("\n%d", nro1);
        }
    }

    return 0;
}
