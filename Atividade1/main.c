#include <stdio.h>
#include<stdlib.h>

// Aula 3 system ("pause")

int main() {

    // printf � uma fun��o de sa�da
    printf("\n-------------------------------------------\n\n");
    printf(" 1 - Logar   2 - Cadastrar    3 - Imprimir\n");
    printf("\n-------------------------------------------\n\n");

    // O system("pause") funciona somente no Windows
    // printf("\nValor retornado: %d", printf("Bom"));

    // Comando com a mesma funcionalidade que executa em qualquer sistema operacional
    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;

}
