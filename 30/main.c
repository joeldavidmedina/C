//4.17. Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su código. Los importes se cobran según la siguiente tabla:
//Código      Importe
//    A               20
//    D               40
//    F               60
//    M              150
//    T               150
//Se debe ingresar el número de historia del paciente y el código de la prestación. Se debe emitir un ticket con el número de la historia, el código y el importe a pagar.

#include <stdio.h>

int main()
{

    int nrohistoria;
    char codigo;
    float importe;

    printf("\ningrese numero de historia medica:");
    scanf("%d", &nrohistoria);

    fflush(stdin);
    printf("\ningrese codigo de prestacion medica:");
    scanf("%c", &codigo);

    codigo=toupper(codigo);

    switch(codigo)
    {
    case 'A':
        importe=20;
        break;
    case 'D':
        importe=40;
        break;
    case 'F':
        importe=60;
        break;
    case 'M':
        importe=150;
        break;
    case 'T':
        importe=150;
        break;
    default:
        printf("\ncodigo no valido.");
        break;
    }

    printf("\nTICKET: \nNUMERO DE HISTORIA MEDICA:   %d \nCODIGO DE PRESTACION MEDICA: %c \nIMPORTE A PAGAR: $ %0.2f\n", nrohistoria, codigo, importe);

    return 0;
}
