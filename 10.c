#include <stdio.h>
#include <string.h>

struct Mahsulot {
    char nomi[50];
    long long narxi;
    int soni;
};

int main() {
    struct Mahsulot m[5];
    
    
    for (int i = 0; i < 5; i++) {
        scanf("%s %lld %d", m[i].nomi, &m[i].narxi, &m[i].soni);
    }
    
    
    char qidiruv[50];
    scanf("%s", qidiruv);
    
    
    long long max_narx = m[0].narxi;
    int max_index = 0;
    
    for (int i = 0; i < 5; i++) {
        if (m[i].narxi > max_narx) {
            max_narx = m[i].narxi;
            max_index = i;
        }
    }
    
    
    int topildi = -1;
    for (int i = 0; i < 5; i++) {
        if (strcmp(m[i].nomi, qidiruv) == 0) {
            topildi = i;
            break;
        }
    }
    
    if (topildi != -1) {
        printf("Mahsulot topildi!\n");
        printf("Nomi: %s\n", m[topildi].nomi);
        printf("Narxi: %lld\n", m[topildi].narxi);
        printf("Soni: %d\n", m[topildi].soni);
    } else {
        printf("Mahsulot topilmadi!\n");
    }
    
    
    FILE *f = fopen("mahsulotlar.txt", "w");
    if (f != NULL) {
        for (int i = 0; i < 5; i++) {
            fprintf(f, "%s %lld %d\n", m[i].nomi, m[i].narxi, m[i].soni);
        }
        fclose(f);
        printf("\nMa'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
    }

    return 0;
}
