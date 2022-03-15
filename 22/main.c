//4.9. Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo ingresado corresponde a
//una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.

#include <stdio.h>

int main() {

    char letra;

    printf("\ningrese una letra:");
    scanf("%c", &letra);

    letra=toupper(letra);

    if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
        printf("\n%c VOCAL, valor ascii %d", letra, letra);
    else
        printf("\nNO VOCAL.");

    return 0;

}
