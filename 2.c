#include <stdio.h>

int main() {
    int mat[2][3];
    int yigindi = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            yigindi += mat[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Yigindi: %d\n", yigindi);

    return 0;
}