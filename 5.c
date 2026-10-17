#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    
    int len = strlen(str);
    
    printf("Uzunligi: %d\n", len);

    return 0;
}