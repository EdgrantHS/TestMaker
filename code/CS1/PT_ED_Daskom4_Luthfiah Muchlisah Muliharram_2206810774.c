#include <stdio.h>

int main() {
    double sks, total_sks = 0, ipk = 0, ipk_akhir;

    while (1) {
        scanf("%lf", &sks);

        if (sks == -1) {
            puts("IPK akhir");
            break;
        }

        if (total_sks + sks > 24) {
            break;
        }

        char index;
        scanf(" %c", &index);

        switch (index) {
            case 'A':
                ipk += 4.0 * sks;
                break;
            case 'B':
                ipk += 3.0 * sks;
                break;
            case 'C':
                ipk += 2.0 * sks;
                break;
            case 'D':
                ipk += 1.0 * sks;
                break;
            default:
                puts("Indeks tidak valid");
                continue;
        }

        total_sks += sks;
    }

    if (total_sks > 0) {
        ipk_akhir = ipk / total_sks;
        printf("%.2lf\n", ipk_akhir);
    } 

    return 0;
}

