#include <stdio.h>
#include <stdlib.h>

int main()
{
    // tipo nome
    float numero = 3.1415;

    printf("\nValor da minha variavel: %.4f\n", numero);

    printf("\nDigite um numero real: ");
    scanf("%f", &numero);

    printf("\nValor lido: %.3f\n\n", numero);

    return 0;
}
