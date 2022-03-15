//2.13. Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda
//calcular e informar la suma de sus dígitos Ej:2561 → 14.

#include <stdio.h>

int main() {

    int nro, sumadigitos=0;

    do {

        printf("\ningrese un numero entero de 4 digitos: ");
        scanf("%d",&nro);

    }while(nro<0 || nro>9999);

    sumadigitos=sumadigitos+nro/1000;//0+digito1
    nro=nro%1000;
    sumadigitos=sumadigitos+nro/100;//digito1+digito2
    nro=nro%100;
    sumadigitos=sumadigitos+nro/10;//(digito1+digito2)+digito3
    nro=nro%10;
    sumadigitos=sumadigitos+nro;//((digito1+digito2)+digito3)+digito4;

    printf("\nla suma de los digitos es: %d", sumadigitos);

    return 0;
}
