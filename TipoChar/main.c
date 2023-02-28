#include <stdio.h>
#include <stdlib.h>

/*
Lendo caracteres
*/

int main()
{
    // tipo nome;
    char sexo = 's';

    printf("\nValor da minha variavel sexo: %c\n", sexo);

    // Tratamento de caracter essencial, pois o usuário pode digitar qualquer caracter fora do escopo determinado
    printf("\nDigite seu sexo: (f, F m ou M)\n");
    scanf("%c", &sexo);

    printf("\nValor da variavel sexo: %c\n", sexo);

    return 0;
}
