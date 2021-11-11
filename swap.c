#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

char *s1 = malloc(sizeof(char) * 100); // declaring string 1

char *s2 = malloc(sizeof(char) * 100); //declaring string 2

printf("Type string one: ");
scanf("%[^\n]%*c",s1); //ask user to type in first string and scans input

printf("Type string two: ");
scanf("%[^\n]%*c",s2); //ask user to type in second string and scans input

s1=s1+(s1-s2);
s2=s1-(s1-s2)/2;
s1=s1-(s1-s2)*2; //this equation is used to swap the string 1 input to the strin
g 2 input and vice versa

printf("\nString one is now : %s ",s1); //prints string 2 input as string 1 
printf("\nString two is now : %s ",s2); //prints string 1 input as string 2

return 0;
}

