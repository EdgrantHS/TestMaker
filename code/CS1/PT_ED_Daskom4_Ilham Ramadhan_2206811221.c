#include <stdio.h>

int main() {
    float x, sks, sentinel = -1, IPK = 0, z = 0, totalsks = 0;
    char y, A = 'A', B = 'B', C = 'C', D = 'D';

    while (1) {
        scanf("%f", &x);
        if (x == sentinel) {
            break;
        }

        if (totalsks + x > 24) {
            printf("INVALID\n");
            break;
        }

        totalsks += x;

        scanf(" %c", &y);
        if (y == A) {
            z += 4.0 * x;
        } else if (y == B) {
            z += 3.0 * x;
        } else if (y == C) {
            z += 2.0 * x;
        } else if (y == D) {
            z += 1.0 * x;
            if (x == sentinel) {
                break;
            }
        } else {
            printf("Nilai yang dimasukkan tidak valid.\n");
            break;
        }
    }

    if (totalsks > 0) {
        IPK = z / totalsks;
        printf("%.2f\n", IPK);
    } else {
        printf("Tidak ada data yang dimasukkan. IPK tidak dapat dihitung.\n");
    }

    return 0;
}

