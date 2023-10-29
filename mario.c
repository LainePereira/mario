#include <stdio.h>

int main() {
    int altura, i, j;

    printf("Digite a altura da escada: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++) {
        // Imprime espaços em branco à esquerda
        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        // Imprime os caracteres '#' para formar a escada
        for (j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n"); // Mova para a próxima linha
    }
    return 0;
}
