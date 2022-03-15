//2.5. Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el 50% son tarros de 1Lt,
//el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de 1Lt., 4Lts. Y 20 Lts.

#include <stdio.h>
int main() {

    int cant_total;
    int cant1lt, cant4lt, cant20lt;

    printf("\ningrese la cantidad de tarros del deposito:");
    scanf("%d",&cant_total);

    cant1lt=cant_total/2;
    cant4lt=(cant_total*30)/100;
    cant20lt=cant_total-cant1lt-cant4lt;//o se podria haber hecho: cant20lt=cant_total-cant1lt-cant4lt

    printf("\nla cantidad de tarros de 1lt es: %d",cant1lt);
    printf("\nla cantidad de tarros de 4lt es: %d",cant4lt);
    printf("\nla cantidad de tarros de 20lt es: %d",cant20lt);

    return 0;
}
