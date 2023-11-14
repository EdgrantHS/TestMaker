#include <stdio.h>

int main(void){
	float ip_matkul, SKS, IPK, total_ip, totalsks = 0, bobotnilai = 0;
	char y, A = 'A', B = 'B', C = 'C', D = 'D';
	
	while(SKS != -1){
		scanf("%f", &SKS);
		if (SKS + totalsks > 24){
			printf ("Input tidak bisa lebih dari 24 sks\n");
			continue;
		}
		if(SKS<25){
			if (SKS == -1){
				break;
			}
			else{
			scanf (" %c", &y);	
			}
			if (y == 'A'){
				ip_matkul=4;
			}
			else if (y == 'B'){
				ip_matkul=3;
			}
			else if (y == 'C'){
				ip_matkul=2;
			}
			else if (y == 'D'){
				ip_matkul=1;
			}
			totalsks = totalsks + SKS;
			total_ip = ip_matkul * SKS;
			bobotnilai += total_ip;
		}
	}
	IPK = bobotnilai/totalsks;
	printf("Hasil IPK = %.2f", IPK);
}
