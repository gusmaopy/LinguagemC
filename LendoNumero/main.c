#include <stdio.h>
#include <stdlib.h>

/*
Aula 4: Lendo n�meros inteiros
*/

int main()
{
    int valor, valor2; // criei duas vari�veis para guardar dois valores do tipo inteiro

    // Atribui��o de um valor a uma vari�vel
    valor = 50;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\n\Primeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);

    return 0;
}
