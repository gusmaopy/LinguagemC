#include <stdio.h>
#include <stdlib.h>

/*
Lendo varios valores com a função scanf();
*/
int main()
{
    int num1, num2, num3;

    printf("\nDigite tres valores inteiros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("\nValores lidos: %d, %d, e %d\n", num1, num2, num3);

    return 0;
}
