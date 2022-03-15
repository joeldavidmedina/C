//4.18. Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento de una persona (día, mes y año).
//Con ambos datos debe calcular la edad de dicha persona.

#include <stdio.h>

int main()
{

    int dia1, mes1, anio1;//fecha actual.
    int dia2, mes2, anio2;//fecha de nacimiento.

    int cantidaddias1;//cantidad de dias de la fecha actual.
    int cantidaddias2;//cantidad de dias de la fecha de nacimiento.

    int restacantdias;//diferencia de dias entre la fecha actual y la fecha de nacimiento.

    int edadanio, edadmes, edaddia;//cantidad de años, de meses, de dias, de la edad de la persona.

    printf("\nFECHA ACTUAL:");
    printf("\ningrese dia:");
    scanf("%d", &dia1);
    printf("\ningrese mes:");
    scanf("%d", &mes1);
    printf("\ningrese anio:");
    scanf("%d", &anio1);

    printf("\nFECHA DE NACIMIENTO:");
    printf("\ningrese dia:");
    scanf("%d", &dia2);
    printf("\ningrese mes:");
    scanf("%d", &mes2);
    printf("\ningrese anio:");
    scanf("%d", &anio2);

    cantidaddias1=anio1*365 + (mes1-1)*30 + dia1;//convierto a dias la fecha actual.
    cantidaddias2=anio2*365 + (mes2-1)*30 + dia2;//convierto a dias la fecha de nacimiento.
    restacantdias=cantidaddias1-cantidaddias2;//calculo la diferencia de dias entre la fecha actual y la fecha de nacimiento.

    edadanio=restacantdias/365;//cantidad de años de la persona.
    restacantdias=restacantdias%365;
    edadmes=restacantdias/30;//cantidad de meses de la persona.
    restacantdias=restacantdias%30;
    edaddia=restacantdias;//cantidad de dias de la persona.

    printf("\nSU EDAD ES:");
    printf("\nanios: %d", edadanio);
    printf("\nmeses: %d", edadmes);
    printf("\ndias: %d", edaddia);

    return 0;
}
