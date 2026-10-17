#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    int *ptr = &x;
    *ptr = 25;

    printf("Yangi qiymat: %d\n", x);

    return 0;
}



