#include<stdio.h>
int main() {
        char ch; //creates char variable name ch
        printf("Type in Password: "); //ask user to to type in their password

        int count = 0; //int variable count is used to count the length of password

do{
        ch = getchar(); //function will read the character from user input

        count++; //find the length of the password the user typed
}

while(ch != '\n');
        int score = (10 - count + 1) * 5; //calculates the score based off the elgnth the user typed

if (score > 30)
        printf("The password is unsafe! Please reset."); //following input if scoce is greater than 30 points
else
        printf("The password is safe."); //following input if score is not greater than 30 points

return 0;

