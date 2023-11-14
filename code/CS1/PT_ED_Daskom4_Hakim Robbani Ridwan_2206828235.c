#include <stdio.h>

int main (){
    char indeks;
    float poin;
    int jumlahsks = 0;
    float indeksjumlahsks = 0;
    float totalsks = 0;
    float ipk = 0;
    while (jumlahsks != -1){
        scanf("%d", &jumlahsks);
        scanf("%c", &indeks);

            if (indeks == 'A'){
                poin = 4.0;
                totalsks += jumlahsks;
                indeksjumlahsks += poin * jumlahsks;
                
            }
            else if (indeks == 'B'){
                poin = 3.0;
                totalsks += jumlahsks;
                indeksjumlahsks += poin * jumlahsks;
            }
            else if (indeks == 'C'){
                poin = 2.0;
                totalsks += jumlahsks;
                indeksjumlahsks += poin * jumlahsks;
            }
            else if (indeks == 'D'){
                poin = 1.0;
                totalsks += jumlahsks;
                indeksjumlahsks += poin * jumlahsks;
            }
            else {
            }
            if (totalsks>=24){
			
                break;
            }
            ipk = indeksjumlahsks / totalsks;
    }
    printf ("%.2f", ipk);

    return 0;
}


