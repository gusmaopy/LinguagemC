#include <stdio.h>
#include <stdlib.h>

/*
Lendo caracteres getchar()
*/

int main()
{
    char letra;

    printf("\nDigite uma letra: ");
    letra = getchar();

    printf("\nCaracter lido: %c\n", letra);
    return 0;
}
