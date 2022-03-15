//5.1.8 Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
//a. Edad promedio. prom=acum/45;
//b. Estatura promedio. prom2=acum2/45;
//c. Cantidad de alumnos mayores de 10 años. cont1++
//d. Cantidad de alumnos que miden menos de 1.40 cm. cont2++

#include <stdio.h>

int main()
{
    int i, edad, acum1=0, cont1=0, cont2=0;
    float prom1, estatura, prom2, acum2=0;

    for(i=0; i<5; i++)
    {
        printf("\n ALUMNO %d:", i+1);
        printf("\ningrese edad del alumno:");
        scanf("%d", &edad);
        printf("\ningrese estatura del alumno:");
        scanf("%f", &estatura);

        acum1+=edad;
        acum2+=estatura;

        if(edad>10)
            cont1++;

        if(estatura<1.4)
            cont2++;

        printf("\n");
    }

    prom1=acum1/5;//edad promedio.
    prom2=acum2/5;//estatura promedio.

    printf("\nla edad promedio de los alumnos es: %0.2f", prom1);
    printf("\nla estatura promedio de los alumnos es: %0.2f", prom2);
    printf("\nla cantidad de alumnos mayores de 10 años es: %d", cont1);
    printf("\nla cantidad de alumnos que miden menos de 1.40cm es: %d", cont2);
    printf("\n");

    return 0;
}
