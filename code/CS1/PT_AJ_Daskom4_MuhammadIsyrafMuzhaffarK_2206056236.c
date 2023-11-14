#include <stdio.h>

int main() {
    int totalSKS = 0;
    float totalNilaiIndeks = 0;
    int sks;
    int nilaiIndeks;
    char nilaiAlfabet;
    float ipk;

    while (totalSKS <= 24) {
        scanf("%d", &sks);

        if (sks == -1 || totalSKS > 24) {
            break;
        }

        scanf(" %c", &nilaiAlfabet);

        if (nilaiAlfabet == 'A' ) {
            nilaiIndeks = 4;
        } else if (nilaiAlfabet == 'B') {
            nilaiIndeks = 3;
        } else if (nilaiAlfabet == 'C') {
            nilaiIndeks = 2;
        } else if (nilaiAlfabet == 'D') {
            nilaiIndeks = 1;
        } else {
            printf("Invalid!\n");
            continue;
        }

        totalSKS += sks;
        totalNilaiIndeks += (nilaiIndeks * sks);
    }

    if (totalSKS > 0) {
        ipk = totalNilaiIndeks / totalSKS;
        printf("%.2f\n", ipk);
    } else {
        printf("Invalid!\n");
    }

    return 0;
}
 
