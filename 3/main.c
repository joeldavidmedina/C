//2.3. Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
//aclaratorios la suma, el producto, el cociente y el resto.

#include <stdio.h>
int main() {
    int nro1, nro2;
    int suma, resta, producto;
    float cociente;

    printf("\ningrese el primer numero:");
    scanf("%d",&nro1);

    printf("\ningrese el segundo numero:");
    scanf("%d",&nro2);

    suma=nro1+nro2;
    resta=nro1-nro2;
    producto=nro1*nro2;

    printf("\nla suma es: %d", suma);
    printf("\nla resta es: %d", resta);
    printf("\nel producto es: %d", producto);

    if(nro2!=0) {
        cociente=nro1/nro2;
        printf("\nel cociente es: %f",cociente);
    }
    else
        printf("\nno se puede calcular el cociente porque el divisor es cero.");

    return 0;
}
