//2.4. Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
//y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.

#include <stdio.h>

int main() {

    float pies, pulgadas, yardas, cms, mts;

    printf("\ningrese la medida en pies:");
    scanf("%f",&pies);

    pulgadas=pies*12;
    yardas=pies/3;
    cms=pulgadas*2.54;
    mts=cms/100;

    printf("\npies: %0.2f", pies);
    printf("\nen yardas: %0.2f",yardas);
    printf("\nen pulgadas: %0.2f",pulgadas);
    printf("\nen centimetros: %0.2f",cms);
    printf("\nen metros: %0.2f",mts);
}
