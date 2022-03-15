//2.11. Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra individualmente se cobra $30 la unidad.
//Si se compran más empanadas que no se agrupen en docenas las adicionales se cobran como por unidad. Indicar el precio total a abonar.

#include <stdio.h>
int main() {

    int precio_docena=300, precio_unidad=30, docenas, unidades, cantidad, total;

    printf("\ningrese cantidad de empanadas del pedido:");
    scanf("%d", &cantidad);

    docenas=cantidad/12;
    unidades=cantidad%12;

    total=precio_docena*docenas+precio_unidad*unidades;

    printf("\ncantidad de docenas: %d", docenas);
    printf("\ncantidad de unidades: %d", unidades);

    printf("\nprecio total: %d", total);

    return 0;

}
