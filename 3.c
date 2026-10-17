#include <stdio.h>

int katta(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int natija = katta(x, y);
    printf("Katta son: %d\n", natija);

    return 0;
}






