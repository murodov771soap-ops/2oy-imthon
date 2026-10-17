#include <stdio.h>

int main() {
    FILE *file = fopen("matn.txt", "w"); 
    
    if (file == NULL) {
        printf("Faylni ochishda xatolik!\n");
        return 1;
    }
    
    fprintf(file, "Salom, C dasturlash!\n");
    printf("Matn faylga yozildi.\n");
    
    fclose(file);

    
}