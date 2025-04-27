#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Cima\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o Bispo e com loops aninhados 
void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima\n"); // Movimento vertical

        for (int i = 0; i < 1; i++)
        {                        
            printf("Direita\n"); // Movimento horizontal dentro do vertical
        }

        moverBispo(casas - 1); // Recursão chamando o próximo movimento diagonal
    }
}

// Função recursiva para a Rainha (para a esquerda)
void moverRainhaEsquerda(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainhaEsquerda(casas - 1);
    }
}

// Função para o Cavalo
void moverCavalo()
{
    for (int i = 0; i < 3; i++)
    { // 3 para cima
        printf("Cima\n");
    }
    for (int j = 0; j < 2; j++)
    { // 2 para direita
        printf("Direita\n");
    }
}

int main()
{

    printf("=== Bem vindo ao Jogo do Xadrez MateCheck! ===\n");

    printf("\nMovimentos da Torre:\n");
    moverTorre(5); // Torre: 5 movimentos para cima

    printf("\nMovimentos do Bispo:\n");
    moverBispo(5); // Bispo: 5 movimentos diagonais (1 cima + 1 direita por casa)

    printf("\nMovimentos da Rainha:\n");
    moverRainhaEsquerda(8); // Rainha: 8 movimentos para esquerda

    printf("\nMovimentos do Cavalo:\n");
    moverCavalo(); // Cavalo: 3 cima + 2 direita

    return 0;
}