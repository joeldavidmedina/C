//4.10. Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, segΓΊn el valor de un cΓ³digo que se ingresa junto al valor. Si cΓ³digo = 1 se ingresan
//grados, si es 2 se ingresan radianes.
//1 ππππππ=180π ππππππ 
//1 πππππ= π180ππππππππ 

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
