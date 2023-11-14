#include <stdio.h>

int main() {
  // Variabel untuk sks dan nilai
  int sks;
  char nilai;
  int total_sks = 0;
  int total_nilai = 0;


  while (1) {
    scanf("%d", &sks);
    if (sks > 24) {
      break;
    }
    if (sks == -1) {
      break;
    }
    
    scanf(" %c", &nilai);
    int index = 0;
    if (nilai == 'A') {
      index = 4;
    } else if (nilai == 'B') {
      index = 3;
    } else if (nilai == 'C') {
      index = 2;
    } else if (nilai == 'D') {
      index = 1;
    } else {
      printf("Nilai invalid\n");
      continue;
    }
    total_sks += sks;
    total_nilai += sks*index;
  }

  float ip = (float)total_nilai / total_sks;
  printf("IPK: %.2f\n", ip);

  return 0;
}
