//Naura Alifa Disa Tatsbita
//2206826425
//PT Modul 4

#include <stdio.h> 

int main() {
    int total_sks = 0;
    float total_indeks = 0.0;
    char nilai_alfabet;

    while (1) {  //loop terus menerus
        int sks;
        //printf("Masukkan jumlah SKS (atau -1 untuk selesai): ");
        scanf("%d", &sks);

        // Jika pengguna ingin keluar
        if (sks == -1) {
            break;
        }

        // Cek total SKS melebihi batas maksimum atau tidak (24 SKS)
        if (total_sks + sks > 24) {
            printf("Invalid (Max. 24 SKS)\n");
            break;  
        }

        //printf("Masukkan nilai alfabet (A, B, C, atau D): ");
        scanf(" %c", &nilai_alfabet);

        // Menghitung nilai indeks berdasarkan nilai alfabet
        float indeks;
        if (nilai_alfabet == 'A') {
            indeks = 4.0;
        }
        if (nilai_alfabet == 'B') {
            indeks = 3.0;
        }
        if (nilai_alfabet == 'C') {
            indeks = 2.0;
        }
        if (nilai_alfabet == 'D') {
            indeks = 1.0;
        }

        // Menghitung total SKS dan total indeks
        total_sks += sks;
        total_indeks += indeks * sks;
    }

    // Menghitung dan menampilkan IP
    float ipk = total_indeks / total_sks;
    printf("%.2f\n", ipk);

    return 0;
}
