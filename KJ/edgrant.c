#include <stdio.h>

int main() {
    float indeks_total = 0;
    float sks_total = 0;
    int sks;
    char ipk;
    float nilai; 

    while (1) {
        scanf("%d", &sks);

        if (sks == -1) {
            break;
        }

        if (sks <= 0 || sks > 24) {
            printf("Invalid.\n");
            break;
        }

        scanf(" %c", &ipk);

        float indeks;

        if (ipk == 'A') {
            indeks_total += 4.00 * sks;
        } else if (ipk == 'B') {
            indeks_total += 3.00 * sks;
        } else if (ipk == 'C') {
            indeks_total += 2.00 * sks;
        } else if (ipk == 'D') {
            indeks_total += 1.00 * sks;
        } else {
            printf("Invalid.\n");
            return 1;
        }
        sks_total += sks;
    }

    if (sks_total > 0) {
        nilai = indeks_total / sks_total;
        printf("%.2f\n", nilai);
    } else {
        printf("Invalid.\n");
    }

    return 0;
}

