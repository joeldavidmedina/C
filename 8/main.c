//2.8. Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un número con formato (aammdd).

#include <stdio.h>

int main() {

    int fecha;
    int dia, mes, anio;
    int fecha2;

    printf("\ningrese fecha dd/mm/aa:");
    scanf("%d",&fecha);

    dia=fecha/10000;
    fecha=fecha%10000;

    mes=fecha/100;
    fecha=fecha%100;

    anio=fecha;

    fecha2=anio*10000+mes*100+dia;

    printf("\ndia: %d", dia);
    printf("\nmes: %d", mes);
    printf("\nanio: %d", anio);
    printf("\nfecha aa/mm/dd: %d", fecha2);

    return 0;
}
