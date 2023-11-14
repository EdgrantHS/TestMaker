#include <stdio.h>

int main(){

    int totalKredit = 0, kredit;
    float ipk = 0.0, indeksSkor = 0.0, totalIPK, skorKredit;
    char indeks;
    
    while(totalKredit < 24){

        scanf("%d", &kredit);

        if(kredit == -1){
            break;
        }

        if(totalKredit + kredit > 24){
            printf("Jumlah SKS maksimal 24\n");
            break;
        }

        if(kredit < 1){
            printf("SKS tidak valid\n");
            break;
        }

        scanf(" %c", &indeks);

        if(indeks == 'A'){
            indeksSkor = 4.0;
        }

        else if(indeks == 'B'){
            indeksSkor = 3.0;
        }

        else if(indeks == 'C'){
            indeksSkor = 2.0;
        }

        else if(indeks == 'D'){
            indeksSkor = 1.0;
        }

		else{
            printf("Nilai tidak valid\n");
            break;   
        }

        skorKredit = indeksSkor * kredit;
        totalKredit += kredit;
        ipk += skorKredit;
    }

    if(totalKredit > 0){
        totalIPK = ipk / totalKredit;
        printf("%.2f\n", totalIPK);
    }

    return 0;
}

