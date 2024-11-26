#include <stdio.h>

int main() {
    int P[3][5], i, j, n1=0, n2=0, n3=0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &P[i][j]);
            n1 += P[0][j];
            n2 += P[1][j];
            n3 += P[2][j];
        }
    }
    printf("Pontuação:\n");
    printf("Jogador 1: %d\nJogador 2: %d\nJogador 3: %d\n", n1, n2, n3);
    if (n1 > n2 && n1 > n3) {
        printf("Vencedor: Jogador 1\n");
    } else if (n2 > n3 && n2 > n1) {
        printf("Vencedor: Jogador 2\n");
    } else {
        printf("Vencedor: Jogador 3\n");
    }
    return 0;
}