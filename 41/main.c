#include <stdio.h>
int main()
{
    int nro=73939133, restar, aux=10;
    printf("\n%d", nro);//7398398133

    while(aux<=10000000)
    {
        restar=nro%aux;
        printf("\n%d", nro-restar);
        aux*=10;
    }

    return 0;
}

//    restar=nro%10;//3
//    printf("\n%d", nro-restar);//7393913
//
//    restar=nro%100;//33
//    printf("\n%d", nro-restar);//739391
//
//    restar=nro%1000;//133
//    printf("\n%d", nro-restar);//73939
//
//    restar=nro%10000;//9133
//    printf("\n%d", nro-restar);//7393
//
//    restar=nro%100000;//39133
//    printf("\n%d", nro-restar);//739
//
//    restar=nro%1000000;//939133
//    printf("\n%d", nro-restar);//73
//
//    restar=nro%10000000;//3939133
//    printf("\n%d", nro-restar);//7
