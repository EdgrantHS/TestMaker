#include <stdio.h>

int main() {
    int sks, indeks = 0, totalSks = 0;
    float ipk, totalIndeks = 0;
    char alfa;

    while (totalSks < 24) {
        scanf("%d", &sks);

        if (sks > 24){
            break;
        }
        if (sks == -1) {
            break;
        }
        if (sks <= 0) {
            sks = 0;
        }
        totalSks = totalSks + sks;
        
        if (totalSks > 24){
            break;
        }

        scanf (" %c", &alfa);
        if (alfa == 'A'){
            indeks = 4;
        }
        else if (alfa == 'B'){
            indeks = 3;
        }
        else if (alfa == 'C'){
            indeks = 2;
        }
        else if (alfa == 'D'){
            indeks = 1;
        }
        else{
            indeks = 0;
            totalSks = totalSks - sks;
        }
        totalIndeks = totalIndeks + (indeks * sks);
    }
    
    
    if (totalSks > 24){
        totalSks = totalSks - sks;
        ipk = totalIndeks / totalSks;
        printf ("%.2f", ipk);
    }
    else {
        ipk = totalIndeks / totalSks;
        printf ("%.2f", ipk);
    }
    return 0;
}