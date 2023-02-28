#include <stdio.h>
#include <stdlib.h>

/*
Aula 4: Lendo números inteiros
*/

int main()
{
    int valor, valor2; // criei duas variáveis para guardar dois valores do tipo inteiro

    // Atribuição de um valor a uma variável
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\n\Primeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
