#include <stdio.h>

int main() {
    // Criando um tabuleiro 5x5 com tudo zerado (0 = água)
    int tabuleiro[5][5] = {0};

    // Posicionando um navio Horizontal começando na posição (1, 1)
    // Ele ocupa as posições (1,1), (1,2) e (1,3)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Posicionando um navio Vertical começando na posição (3, 0)
    // Ele ocupa as posições (3,0), (4,0) e (2,0)
    tabuleiro[2][0] = 3;
    tabuleiro[3][0] = 3;
    tabuleiro[4][0] = 3;

    // Mostrando as coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    printf("(1,1)\n");
    printf("(1,2)\n");
    printf("(1,3)\n");

    printf("\nCoordenadas do navio vertical:\n");
    printf("(2,0)\n");
    printf("(3,0)\n");
    printf("(4,0)\n");

    // Mostrando o tabuleiro completo (0 = vazio, 3 = parte de navio)
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Coordenadas do navio horizontal:
(1,1)
(1,2)
(1,3)

Coordenadas do navio vertical:
(2,0)
(3,0)
(4,0)

Tabuleiro:
0 0 0 0 0
0 3 3 3 0
3 0 0 0 0
3 0 0 0 0
3 0 0 0 0

    #include <stdio.h>

int main() {
    // Criar o tabuleiro 10x10 com tudo zerado
    int tabuleiro[10][10] = {0};

    // === Posicionamento dos Navios ===
    // 1. Navio horizontal (tamanho 4)
    // Linha 2, colunas 3 a 6
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;
    tabuleiro[2][6] = 3;

    // 2. Navio vertical (tamanho 3)
    // Coluna 7, linhas 5 a 7
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // 3. Navio diagonal principal (↘) – tamanho 3
    // Começa em (0,0) → (0,0), (1,1), (2,2)
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;

    // 4. Navio diagonal secundária (↙) – tamanho 3
    // Começa em (0,9) → (0,9), (1,8), (2,7)
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    // === Exibição do Tabuleiro === 

    printf("Tabuleiro 10x10 com navios posicionados:\n");
    printf("(0 = água, 3 = parte de navio)\n\n");

    // Mostrar a matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Tabuleiro 10x10 com navios posicionados:
(0 = água, 3 = parte de navio)

3 0 0 0 0 0 0 0 0 3 
0 3 0 0 0 0 0 0 3 0 
0 0 3 3 3 3 0 3 0 0 
...

   #include <stdio.h>

void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // ==== Habilidade: Cone ====
    // Padrão:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    // === Habilidade: Cruz ===
    // Padrão:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    for (int i = 0; i < 5; i++) {
        cruz[1][i] = 1; // linha do meio
        cruz[i][2] = 1; // coluna do meio
    }

    // === Habilidade: Octaedro ===
    // Padrão:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // ===== Imprimir Matrizes =====

    printf("Habilidade: CONE\n");
    imprimirMatriz(cone);

    printf("Habilidade: CRUZ\n");
    imprimirMatriz(cruz);

    printf("Habilidade: OCTAEDRO\n");
    imprimirMatriz(octaedro);

    return 0;
}
Habilidade: CONE
0 0 1 0 0
0 1 1 1 0
1 1 1 1 1
0 0 0 0 0
0 0 0 0 0

Habilidade: CRUZ
0 0 1 0 0
1 1 1 1 1
0 0 1 0 0
0 0 1 0 0
0 0 1 0 0

Habilidade: OCTAEDRO
0 0 1 0 0
0 1 1 1 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
