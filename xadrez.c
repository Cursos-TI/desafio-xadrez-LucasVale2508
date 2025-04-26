#include <stdio.h>

int main()
{

    // Mover a torre cinco casas para a direita

    printf("\n== Movimento da Torre ==\n");
    for (int t = 0; t < 5; t++)
    {
        printf("Torre move para a Direita\n"); // Imprime a direção do movimento da torre
    }

    // Mover o bispo cinco casas na diagonal para cima e à direita

    int b = 0; // contador para o bispo
    printf("\n== Movimento do Bispo ==\n");
    while (b < 5)
    {
        printf("Bispo move para Cima, Direita\n"); // Imprime a direção do movimento do bispo
        b++;
    }

    // Mover a Rainha oito casas para Sa esquerda
    int r = 0;
    printf("\n== Movimento da Rainha ==\n");
    do
    {
        printf("Rainha move para esquerda\n"); // Imprime a direção do movimento da rainha
        r++;
    } while (r < 8);

    // Movimento do cavalo

    int movimentoCompleto = 1; // Variavel para controlar movimento em L

    printf("\n== Movimento do Cavalo ==\n");

    while (movimentoCompleto--)
    {
        for (int c = 0; c < 2; c++)
        {
            printf("Cavalo move para cima\n");
        }

        printf("Cavalo move para direita\n");
    }

    return 0;
}