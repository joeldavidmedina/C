//4.12. Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando en cuenta que recibe un premio de $500 si trabajo
// más de 50 horas y, además, si trabajó más de 150 horas se le otorgan $1000 adicionales.

#include <stdio.h>

int main() {

    int horas;
    float sueldo, valorhora;

    printf("\ningrese la cantidad de horas trabajadas:");
    scanf("%d", &horas);

    printf("\ningrese el valor por hora:");
    scanf("%f", &valorhora);

    sueldo=horas*valorhora;

    if(horas>50)
        sueldo+=500;
    if(horas>150)
        sueldo+=1000;

    printf("\nsueldo: %f", sueldo);

    return 0;
}
