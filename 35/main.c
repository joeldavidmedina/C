//5.1.4 Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.

#include <stdio.h>

int main()
{
    int i, cont=0;
    char letra;

    for(i=0; i<5; i++)
    {
        printf("\ningrese una letra: ");
        scanf("%c", &letra);
        fflush(stdin);
        letra=toupper(letra);

        if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
            cont++;
    }

    printf("\nla cantidad de letras ingresadas es: %d", cont);

    return 0;
}
