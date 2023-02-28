#include <stdio.h>
#include <stdlib.h>

/*
Lendo variáveis com a função fgetc();
*/
int main()
{
    char letra;

    printf("\nDigite um caracter: ");
    letra = fgetc(stdin);

    printf("\nCaracter lido: %c\n", letra);

    return 0;
}
