//4.3. Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos es igual a la suma de los otros dos.

#include <stdio.h>

int main() {

    int nro1, nro2, nro3;

    printf("\ningrese tres numeros: ");
    scanf("%d%d%d", &nro1, &nro2, &nro3);

    if(nro1==(nro2+nro3))
        printf("\nel primer numero es igual a la suma de los otros dos.");
    else {
        if(nro2==(nro1+nro3))
            printf("\nel segundo numero es igual a la suma de los otros dos.");
        else {
            if(nro3==(nro1+nro2))
                printf("\nel tercer numero es igual a la suma de los otros dos.");
            else
                printf("\nninguno el igual a la suma de los otros dos.");
        }
    }

    return 0;
}
