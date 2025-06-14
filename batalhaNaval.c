#include <stdio.h>

int main() {

    //Declarando o tabuleiro
    int tabuleiro [10][10] = {0};

    //posiciona um navio na vertical
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[3][1] = 1;

    //posiciona um navio na horizontal
    tabuleiro[4][4] = 1;
    tabuleiro[4][5] = 1;
    tabuleiro[4][6] = 1;

    //Exibindo as coodenadas dos navios
    printf("Exibindo as coodenadas dos navios:\n\n");
    printf("Navio na vertical\n");
    printf("(1,1)\n(2,1)\n(3,1)\n\n");
    printf("Navio horizontal\n");
    printf("(4,4)\n(4,5)\n(4,6)\n\n");


    //Exibindo o tabuleiro
    printf("\nTabuleiro:\n\n");

    for (int i = 0; i < 10; i++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("%d ", tabuleiro[i][y]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
