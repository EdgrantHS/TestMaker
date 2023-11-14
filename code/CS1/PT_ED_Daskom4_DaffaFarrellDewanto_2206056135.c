#include <stdio.h>
int main ()
{
	float ipk,total_ipk=0,sks, total_sks=0, frekuensi, nilai;
	char indeks;
	
	while (sks != -1 )	{
		scanf ("%f",&sks);
		if (sks==-1) {
			break;
		}
		if (total_sks + sks > 24 ) {
			break;
		}
		if (sks<1) {
			continue;
		}
		scanf (" %c", &indeks);
		if (indeks != 'A' && indeks != 'B' && indeks != 'C' && indeks != 'D') {
			printf ("tidak valid\n");
		}
		if (indeks == 'A'){
			nilai=4.0;
		} 
		else if (indeks == 'B') {
			nilai=3.0;
		} 
		else if (indeks == 'C') {
			nilai=2.0;
		} 
		else if (indeks == 'D') {
			nilai=1.0;
		} 
	
		ipk += (nilai*sks);
		total_sks += sks;
		total_ipk = ipk/total_sks;

	}
	
	printf ("%.2lf\n", total_ipk);
	return 0;
}
