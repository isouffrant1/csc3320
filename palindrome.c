#include<stdio.h>
#include<string.h>
int clear(int num) //function to check if number is a palindrome or not
{
  int check, rem, rev=0; //creates 3 diiferent types of variables
  check = num;

  while( num!=0 ) //the while loop is used to find remainder and other values
  {
     rem = num % 10;
     rev = rev*10 + rem;
     num /= 10;
  }

  if ( rev == check ) return 0; //if the rev and check are the same value then it passes as 0(palindrome) if not it passes as 1(not palindrome)
  else return 1;
}

int main()
{
  int num; //creates a variable name num which will store the user number

  printf("Type in a number: ");
  scanf("%d", &num); //Ask user to type in a number and it will scan the number to the function

  if(clear(num) == 0)
  printf("%d is a palindrome\n",num); //if the number is a palindrome it will print this
  else
  printf("%d is not a palindrome\n",num); //if the number is not a palindrome it will print this

  return 0;
}

