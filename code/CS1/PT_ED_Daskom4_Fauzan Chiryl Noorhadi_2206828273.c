#include <stdio.h>

int main() {
    int totalsks = 0;
    double totalnilai = 0.0;

while (1) {
    int SKS;
    char nilai;

    printf("Input SKS: ");
    scanf("%d", &SKS);

if (SKS == -1) {
    break;
    }

    printf("Input Nilai: ");
    scanf(" %c", &nilai); 
        
if (nilai == 'A'){
    totalnilai += SKS * 4.0;  
    } 
		
else if (nilai == 'B') {
    totalnilai += SKS * 3.0;
    } 
	
else if (nilai == 'C') {
    totalnilai += SKS * 2.0;
    } 
	
else if (nilai == 'D') {
    totalnilai += SKS * 1.0;
    } 
	
else{
    printf("Nilai Invalid, Only: A, B, C, D \n");
    continue;
    }

    totalsks += SKS;

if (totalsks > 24) {
    break;
    }
}

if (totalsks > 0){
    double ip = totalnilai / totalsks;
    printf("IPK: %2f\n", ip);
    } 
	
return 0;

}

