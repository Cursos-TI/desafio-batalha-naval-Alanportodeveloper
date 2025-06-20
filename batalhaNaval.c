#include <stdio.h>

  // Função que valida se uma coordenada está dentro dos limites do tabuleiro
    int coodenadasValidas(int linha, int coluna){
        return (linha >= 0 && linha < 10) && (coluna >= 0 && coluna < 10);
    }

int main() {

    //Declarando o tabuleiro e inicializa todas as posições com o valor 0 que representa a água
    int tabuleiro [10][10] = {0};

    //Verifica se as coodenadas estão dentro dos limites do tabuleiro, chamando a função coodenadasValidas, verifica se as posições estão livres e posiciona um navio na vertical
    if (coodenadasValidas(1,1) && coodenadasValidas(2,1) && coodenadasValidas(3,1) && tabuleiro[1][1] == 0 && tabuleiro [2][1] == 0 && tabuleiro[3][1] == 0)
    {
        tabuleiro[1][1] = 3;
        tabuleiro[2][1] = 3;
        tabuleiro[3][1] = 3;
    } else {
        printf("Erro ao posicionar o navio na vertical\n"); //Mostra a saída com erro caso as condições não sejam atendidas
    }

    //posiciona um navio na horizontal e verifica se as posições estão livres
    if (coodenadasValidas(4,4) && coodenadasValidas(4,5) && coodenadasValidas(4,6) && tabuleiro[4][4] == 0 && tabuleiro [4][5] == 0 && tabuleiro[4][6] == 0)
    {
        tabuleiro[4][4] = 3;
        tabuleiro[4][5] = 3;
        tabuleiro[4][6] = 3;
    } else {
        printf("Erro ao posicionar o navio na horizontal\n"); //Mostra a saída com erro caso as condições não sejam atendidas
    }
    

     //posiciona navio na diagonal descendo e verifica se as posições estão livres (Linha e coluna aumentando)
    if (coodenadasValidas(6,6) && coodenadasValidas(7,7) && coodenadasValidas(8,8) && tabuleiro[6][6] == 0 && tabuleiro [7][7] == 0 && tabuleiro[8][8] == 0)
    {
         tabuleiro[6][6] = 3;
         tabuleiro[7][7] = 3;
         tabuleiro[8][8] = 3;
    } else {
        printf("Erro ao posicionar o navio na diagonal descendo\n"); //Mostra a saída com erro caso as condições não sejam atendidas
    }

      //posiciona navio na diagonal subindo e verifica se as posições estão livres (Linha aumentando e coluna diminuindo)
    if (coodenadasValidas(0,9) && coodenadasValidas(1,8) && coodenadasValidas(2,7) && tabuleiro[0][9] == 0 && tabuleiro [1][8] == 0 && tabuleiro[2][7] == 0)
    {
         tabuleiro[0][9] = 3; 
         tabuleiro[1][8] = 3;
         tabuleiro[2][7] = 3;
    } else {
        printf("Erro ao posicionar o navio na diagonal subindo\n"); //Mostra a saída com erro caso as condições não sejam atendidas
    }
    

    //Exibindo as coodenadas dos navios
    printf("Exibindo as coodenadas dos navios:\n\n");
    printf("Navio na vertical\n");
    printf("(1,1) (2,1) (3,1)\n\n");
    printf("Navio horizontal\n");
    printf("(4,4) (4,5) (4,6)\n\n");
    printf("Navio na diagonal descendo\n");
    printf("(6,6) (7,7) (8,8)\n\n");
    printf("Navio na diagonal subindo\n");
    printf("(0,9) (1,8) (2,7)\n\n");


    //Exibindo o tabuleiro
    printf("\nTabuleiro:\n\n");
    // Laço externo que percorre as linhas do tabuleiro (de 0 até 9).
    for (int i = 0; i < 10; i++)
    {
        // Laço interno que percorre as colunas do tabuleiro (de 0 até 9).
        for (int y = 0; y < 10; y++)
        {
            // Imprime o valor da célula [i][y] do tabuleiro.
            // Mostra 0 se não houver navio e 1 se houver parte de um navio.
            printf("%d ", tabuleiro[i][y]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = água | 3 = parte do navio\n");
    printf("\n\n");

    return 0;
}
