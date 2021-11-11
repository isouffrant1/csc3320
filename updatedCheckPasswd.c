#include<stdio.h>

int main() {
        char pass[20]; //creates array called pass
        printf("Type in Password: "); //asks user to type in their password
        scanf("%s", pass); //scans the string that user typed into pass array
        int score = 0; //creates a variable to store the final score
        int i, missing; //creates a variable of i and missing
        missing = 0; //variable missing will update when there is a missing criteria 
        for (i = 0; pass[i] !='\0'; i++){
                if (pass[i] >= 'a' && pass[i] <= 'z'){
                        missing = 1;}
                        }
        if (missing == 0)
                score = score + 20;
        missing = 0; //checks if there is a missing lowercase letter or not
        for (i = 0; pass[i] != '\0'; i++){
                if (pass[i] >= 'A' && pass[i] <= 'Z'){
                        missing = 1;}
                        }
        if (missing == 0)
                score = score + 20;
        missing = 0; //checks if there is a missing uppercase letter or not
        for (i = 0; pass[i] != '\0'; i++){
                if (pass[i] >= '0' && pass[i] <= '9'){
                        missing = 1;}
                        }
        if (missing == 0)
                score = score + 20;
        missing = 0; //checks if there is a missing number or not
        for (i = 0; pass[i+2] != '\0'; i++){
                if ((pass[i+2] - pass[i+1] == 1) && (pass[i+1] - pass[i] == 1)){
                        missing = 1;}
                        }
        if (missing == 0)
                score = score + 20;
        missing = 0; //checks if there is more than 2 consecutive characters or not
        if (score > 30)
                printf("Final Score: %d Unsafe", score); //print following statement if final score is greater than 30
        else
                printf("Final Score: %d Safe", score); //print following statement if final score is not greater than 30
}

