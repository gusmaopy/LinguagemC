#include <stdio.h>
#include <stdlib.h>

/*
Lendo vari�veis com a fun��o fgetc();
*/
int main()
{
    char letra;

    printf("\nDigite um caracter: ");
    letra = fgetc(stdin);

    printf("\nCaracter lido: %c\n", letra);

    return 0;
}
