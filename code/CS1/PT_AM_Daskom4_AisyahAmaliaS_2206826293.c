#include <stdio.h>

int main (){
	
	int sks = 0, jumlah_sks = 0;
	float nilai, ipk;
	char index;
	
	while (sks != -1){
		
		scanf ("%d", &sks);
		
		if (sks>0){
			
			scanf (" %c", &index);	
			
				if (index == 'A'){
				jumlah_sks += sks;
				nilai += (4.0 * sks);
			} 
			else if (index == 'B'){
				jumlah_sks += sks;
				nilai += (3.0 * sks);
			}
			else if (index == 'C'){
				jumlah_sks += sks;
				nilai += (2.0 * sks);
			}
			else if (index == 'D'){
				jumlah_sks += sks;
				nilai += (1.0 * sks);
			}
			else {
				printf ("invalid!\n");	
			}
			
			if (jumlah_sks >= 24){
			break;
			}
		}
		
		else if (sks <-1 && sks ==0){
			printf("invalid!\n");
			scanf ("%d", &sks);
		}
	}
				
	ipk = nilai/jumlah_sks;
	printf ("%.2f", ipk);
	
	return 0;
}
