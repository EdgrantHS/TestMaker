// Post Test Daskom4 Dyah Maritza 2206056192

#include<stdio.h>

int main(){
	int sks = 0;
	int total_sks = 0;
	float IP = 0;
	float IPK;
	float Limit;
	float nilai;
	char indeks;
	
	while (sks != -1){
		Limit = total_sks + sks;
		scanf ("%d", &sks);
		if (Limit > 24){
			printf ("Error\n");
			break;
		}		
		if (sks < 1){
			printf ("invalid\n");
			continue;
		}
		
		scanf ("%c", &indeks);
		if (indeks == 'A'){
			nilai = 4.0;
		}
		else if (indeks == 'B'){
			nilai = 3.0;
		}
		else if (indeks == 'C'){
			nilai = 2.0;
		}
		else if (indeks == 'D'){
			nilai = 1.0;
		}
		else {
			continue;
		}
		total_sks += sks;
		IP += nilai * sks;
	}
	IPK = IP / total_sks;
	printf ("%.2f\n", IPK);
	return 0;
}
