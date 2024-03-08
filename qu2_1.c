// Q2. Write a program to calculate a Factorial of a number
#include<stdio.h>
int myfact(int num)
{int result;
if (num == 0)
  return 1;
  else 
    result= num *myfact(num-1);
    return result;
}
int main()
{
  printf("enter th enumber of which you want to find factorial => ");
  int num;
  scanf("%d",&num);
  int factorial=myfact(num);
  printf("%d\n",factorial);
}