#include <stdio.h>
#include <stdlib.h>
/*
Atividade: ler sexo, idade, peso e altura
*/

char sexo;
int idade;
float peso, altura;

int main()
{
    printf("\nDigite o sexo (f, F m ou M), a idade, o peso e a altura\n");
    scanf("%c%d%f%f",&sexo, &idade, &peso, &altura);

    printf("\nSexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);

    return 0;
}
