//2.10. Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera.
//𝑆𝑢𝑝𝑒𝑟𝑓𝑖𝑐𝑖𝑒=𝜋𝑟2 𝑃𝑒𝑟í𝑚𝑒𝑡𝑟𝑜= 2𝜋𝑟 𝑉𝑜𝑙ú𝑚𝑒𝑛=43𝜋𝑟3

#include <stdio.h>
int main() {

    float PI=3.14;
    float radio, area, perimetro, volumen;

    printf("\ningrese el radio del circulo: ");
    scanf("%f", &radio);

    area=PI*(radio*radio);
    perimetro=2*PI*radio;
    volumen=(4/3)*PI*(radio*radio*radio);

    printf("\nel area del circulo es: %f", area);
    printf("\nel perimetro de circulo es: %f", perimetro);
    printf("\nsi fuera una esfera de radio %f, tendria un volumen de: %f", radio, volumen);

    return 0;
}
