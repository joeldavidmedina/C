//4.17. Confeccionar un programa que pueda determinar el importe a pagar por una prestaci�n m�dica seg�n su c�digo. Los importes se cobran seg�n la siguiente tabla:
//C�digo      Importe
//    A               20
//    D               40
//    F               60
//    M              150
//    T               150
//Se debe ingresar el n�mero de historia del paciente y el c�digo de la prestaci�n. Se debe emitir un ticket con el n�mero de la historia, el c�digo y el importe a pagar.

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
