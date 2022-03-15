//4.10. Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, según el valor de un código que se ingresa junto al valor. Si código = 1 se ingresan
//grados, si es 2 se ingresan radianes.
//1 𝑟𝑎𝑑𝑖𝑎𝑛=180𝜋 𝑔𝑟𝑎𝑑𝑜𝑠
//1 𝑔𝑟𝑎𝑑𝑜= 𝜋180𝑟𝑎𝑑𝑖𝑎𝑛𝑒𝑠

 #include <stdio.h>

 int main()
 {
     float cantidad, conversion;
     int codigo;

     printf("ingrese unidad de la medida(1 grados, 2 radianes): ");
     scanf("%d", &codigo);

     printf("ingrese medida:");
     scanf("%f", &cantidad);

     if(codigo==1)//grados a radianes.
    {
        conversion=cantidad*(3.14/180);
        printf("\n%f grado es %f radianes.", cantidad, conversion);
    }
     if(codigo==2)//radianes a grados.
    {
        conversion=cantidad*(180/3.14);
        printf("\n%f radianes es %f grados.", cantidad, conversion);
    }

    return 0;
 }
