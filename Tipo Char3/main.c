#include <stdio.h>
#include <stdlib.h>

/*
Lendo vari�veis com a fun��o getc();
*/
int main()
{
    char letra;

    printf("\nDigite um caracter: ");
    letra = getc(stdin);

    printf("\nCaracter lido: %c\n", letra);

    return 0;
}
