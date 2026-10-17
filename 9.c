#include <stdio.h>

int engKatta(int mat[3][3]) {
    int max = mat[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
    }
    return max;
}

int main() {
    int mat[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Matritsa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    int max_val = engKatta(mat);
    printf("\nEng katta element: %d\n", max_val);
    
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += mat[i][j];
        }
        printf("%d-satr yig'indisi: %d\n", i + 1, sum);
    }

    return 0;
}