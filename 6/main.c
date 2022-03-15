//2.6. El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase. Se ingresan la cantidad de pasajes vendidos
//de clase turista y de primera clase. Obtener la recaudación total del vuelo.

#include <stdio.h>
int main() {

    int cant1, cant2;
    float acum1=0, acum2=0;
    float acum3=0;

    printf("\ningrese la cantidad de pasajes vendidos en clase turista:");
    scanf("%d",&cant1);
    acum1=cant1*8800;

    printf("\ningrese la cantidad de pasajes vendidos en primera clase:");
    scanf("%d",&cant2);
    acum2=cant2*(8800+30*88);

    acum3=acum1+acum2;

    printf("\nla recaudacion en clase turista es: %f $",acum1);
    printf("\nla recaudacion en primera clase es: %f $",acum2);
    printf("\nla reacudacion total es: %f $", acum3);

    return 0;
}
