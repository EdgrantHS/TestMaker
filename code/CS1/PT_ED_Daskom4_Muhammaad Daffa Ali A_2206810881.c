#include <stdio.h>

int main(){
	float bobot, sks, totalsks = 0, totalbobot = 0, sentinel = -1, IPK;
	char nilai , A = 'A' , B = 'B' , C = 'C' , D = 'D';
	
	
	while (totalsks <= 24){
		scanf ("%f" , &sks);
		if (sks == sentinel){
			break;
		}else if (sks < 1 || sks > 24){
			printf ("Jumlah SKS tidak valid.\n");
			continue;
		}
		totalsks += sks;
		scanf (" %c" , &nilai);
		if (nilai == A){
			bobot = 4.0;
			totalbobot += sks * bobot;
		}else if (nilai == B){
			bobot = 3.0;
			totalbobot += sks * bobot;
		}else if (nilai == C){
			bobot = 2.0;
			totalbobot += sks * bobot;
		}else if (nilai == D){
			bobot = 1.0;
			totalbobot += sks * bobot;
		}

	}
	if (totalsks > 24){
		printf("INVALID\n");
	}
	if (totalsks <= 24){
	IPK = totalbobot / totalsks;
	printf ("%.2f" , IPK);
	}
	return 0;
}
