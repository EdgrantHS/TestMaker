//Syarifah Raesa Aqila 2206812496
#include <stdio.h>
int main () {
int sks; // Variabel berisi jumlah sks
double ipk; //IPK
double perkalian = 0, total = 0; //Perkalian antara sks dan nilai index serta total yang nilai awalnya 0
char index; //Huruf Index
scanf ("%d", &sks); //Meminta input sks
while (sks != -1) { //Program akan berhenti bila user menginput -1 (nilai sentinel)
	if (total < 24) { //Bila total sks tidak lebih dari 24
		scanf ("%c", &index); //Meminta input index berupa huruf
	}
	if (total > 24) { //Bila total sks > 24 maka program berhenti
		break;
	}
	else if (index/1 == 65){ //Jika indeks/1 = 65 (karena A=65). Pembagian dengan 1 berfungsi agar huruf berperan sebagai integer
		perkalian+=4*sks; //Perkalian ditambah 4*sks
		total+=sks; //Total sks ditingkatkan sesuai penjumlahan dengan input
		scanf ("%d", &sks); //Meminta input sks
	}
	else if (index/1 == 66) { //Bila indeks/1 = 66 (karena B =66). Pembagian dengan 1 berfungsi agar huruf berperan sebagai integer
		perkalian+=3*sks; //Perkalian ditambah 3*sks
		total+=sks; //Total sks ditingkatkan sesuai penjumlahan dengan input
		scanf ("%d", &sks); //Meminta input sks
	}
	else if (index/1 == 67) { //Bila indeks/1 = 67 (karena C =67). Pembagian dengan 1 berfungsi agar huruf dapat berperan sebagai integer
		perkalian+=2*sks; //Perkalian ditambah 2*sks
		total+=sks; //Total sks ditingkatkan sesuai penjumlahan dengan input
		scanf ("%d", &sks); //Meminta input sks
	}
	else if (index/1 == 68) { //Bila indeks/1 = 68 (karena D =68). Pembagian dengan 1 berfungsi agar huruf dapat berperan sebagai integer
		perkalian+=1*sks; //Perkalian ditambah 1*sks
		total+=sks; //Total sks ditingkatkan sesuai penjumlahan dengan input
		scanf ("%d", &sks); //Meminta input sks
	}
	}
ipk = perkalian/total; //Menghitung IPK berdasarkan rumus
printf ("%.2lf\n", ipk); //Menampilkan IPK
return 0;
}

