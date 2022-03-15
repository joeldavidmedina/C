//Unidad 2 - Secuencial
//2.1. Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.

#include <stdio.h>
main() {
    int cant_horas;
    float valor_hora;
    float sueldo;

    printf("\ningrese cantidad de horas trabajadas:");
    scanf("%d",&cant_horas);

    printf("\ningrese valor por hora:");
    scanf("%f",&valor_hora);

    sueldo=cant_horas*valor_hora;

    printf("\nel sueldo es: %f$",sueldo);
}
