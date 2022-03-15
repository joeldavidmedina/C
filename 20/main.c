//4.7. Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine e informe si forman o no triángulo. Para ello
//utilizar el teorema de la desigualdad del triángulo que establece que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del tercer lado.

#include <stdio.h>

int main()
{
    float nro1, nro2, nro3;

    printf("\ningrese las tres longitudes del triangulo: ");
    scanf("%f%f%f", &nro1, &nro2, &nro3);

    if((nro1+nro2)>nro3)
        printf("\nlas tres longitudes forman un triangulo.");
    else
        printf("\nlas tres longitudes no forman un triangulo.");

    return 0;
}
