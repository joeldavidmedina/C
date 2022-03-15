//4.11. Escribir un programa que solicite el a�o y el n�mero de mes y nos informe cuantos d�as tiene dicho mes.
//Debemos considerar que el a�o puede ser bisiesto. Un a�o es bisiesto cuando es divisible por 4 y no por 100 o el a�o es
//divisible por 400.

#include <stdio.h>

int main() {

    int anio, mes, dias;
    int vdias[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("\ningrese anio:");
    scanf("%d", &anio);
    printf("\ningrese mes:");
    scanf("%d", &mes);

    if( ((anio%4==0 && anio%100!=0) || (anio%400==0)) && (mes==2) )//el mes es febrero y el a�o es bisiesto.
    {
        dias=29;
    }
    else//el mes no es febrero y el a�o es bisiesto, o el mes es febrero y el a�o no es bisiesto.
    {
         dias=vdias[mes];
    }
    printf("\nla cantidad de dias que tiene el mes es: %d", dias);
    return 0;
}
