//2.10. Confeccionar un programa que solicite el ingreso del valor del radio (r) de un cΓ­rculo y con dicho valor calcule la superficie del cΓ­rculo, la longitud de la circunferencia (perΓ­metro) y el volumen de la esfera.
//ππ’ππππππππ=ππ2 πππΓ­πππ‘ππ= 2ππ πππΓΊπππ=43ππ3

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
