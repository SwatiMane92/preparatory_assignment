// Q2. Write a program to calculate a Factorial of a number
#include<stdio.h>
int myfact(int num)
{int result=1;
 for (int i=1; i<=num ;i++)
   result=result*i;
   return result;
}
int main ()
{ printf("enter th enumber of which you want to find factorial");
int num;
scanf("%d",&num);
int factorial=myfact(num);
printf("%d",factorial);
}