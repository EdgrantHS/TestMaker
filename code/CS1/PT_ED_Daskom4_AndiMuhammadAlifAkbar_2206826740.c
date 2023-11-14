#include <stdio.h>

int main (){

    float weight, input_credits, GPA, sum_weight = 0, sum_credits = 0;
    char grade;


    while (input_credits != -1){

        scanf ("%f", &input_credits);
        scanf ("%c", &grade);
      
        if (grade == 'A'){
            weight = input_credits * 4;
            sum_weight += weight;
            sum_credits += input_credits;
        }

        else if (grade == 'B'){
            weight = input_credits * 3;
            sum_weight += weight;
            sum_credits += input_credits;
        }

        else if (grade == 'C'){
            weight = input_credits * 2;
            sum_weight += weight;
            sum_credits += input_credits;
        }

        else if (grade == 'D'){
            weight = input_credits * 1;
            sum_weight += weight;
            sum_credits += input_credits;
        }

        else{
            continue;
        }

        if (sum_credits >= 24){
            break;
        }
        
        else{
            continue;
        }
    }
 
    GPA = sum_weight/sum_credits;

    printf ("%.2f", GPA);

    return 0;
}
