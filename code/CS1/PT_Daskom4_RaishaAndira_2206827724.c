#include <stdio.h>

int main() {
    int total_credit_course = 0;
    double total_weight = 0;

    while (1) {
        int credit_course;
        char grade;
        
        scanf("%d", &credit_course);

        if (credit_course == -1 || credit_course + total_credit_course > 24) {
            if (credit_course == -1) {
            
            } else {
                printf("Jumlah SKS sudah mencapai 24 SKS\n");
            }
            break;
        }

        scanf(" %c", &grade);
        
        if (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D') {
           printf("Invalid input, silakan masukan (A, B, C, atau D)\n");
           continue;
        } else {
           printf ("%c");
        }

        double weighted_value = (grade == 'A') ? 4.0 : (grade == 'B') ? 3.0 : (grade == 'C') ? 2.0 : 1.0;

        total_credit_course += credit_course;
        total_weight += weighted_value * credit_course;
    }

    if (total_credit_course > 0) {
        double gpa = total_weight / total_credit_course;
        printf("%.2lf\n", gpa);
    } else {
        printf("Tidak ada data\n");
    }

    return 0;
}

