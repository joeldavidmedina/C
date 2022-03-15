//2.2. Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.

#include <stdio.h>
main() {
    int nota1, nota2;
    float prom;

    printf("\ningrese nota 1:");
    scanf("%d",&nota1);

    printf("\ingrese nota 2:");
    scanf("%d",&nota2);

    prom=(nota1+nota2)/2;

    printf("\nel promedio es: %f",prom);
}
