//5.1.7 Dadas 20 notas y legajos de alumnos de un curso. Determinar:
//a. Cantidad de alumnos aplazados.
//b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”.

#include <stdio.h>

int main()
{
    int nrolegajo, nota, i, cont=0;

    for(i=0; i<5; i++)
    {
        printf("\ningrese numero de legajo del alumno:");
        scanf("%d", &nrolegajo);

        printf("\ningrese nota del alumno:");
        scanf("%d", &nota);

        if(nota<=4)
            cont++;

        if(nota>=7)
            printf("\nEl alumno con legajo %d ha promocionado.", nrolegajo);
    }

    printf("\nla cantidad de alumnos aplazados son: %d", cont);

    return 0;
}
