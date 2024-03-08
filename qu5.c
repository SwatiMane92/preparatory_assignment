/*Q5. Write a program to check the input characters for uppercase, 
lowercase, number of digits and other character*/
#include<stdio.h>
int main ()
{
    char ch;

    printf("enter the character");
    scanf("%c",&ch);

    if(65<=ch<=95)
      printf("%c is uppercase\n",ch );
    else if (97<=ch<=122)  
      printf("%c is lowercase\n",ch ); 
    else if (48<=ch<=57)
      printf("%c is number\n",ch );
    else
      printf("%c is special ch\n",ch);

}