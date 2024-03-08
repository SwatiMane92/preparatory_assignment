// Q3. Write a program to calculate Fibonacci Series up to n numbers
#include<stdio.h>
void myfibo(int num)
{
   int a=0,b=1,c;
   if (num==1)
    printf("%d",a);
   else
    printf("%d %d ",a ,b);

  for (int i=2;i<num;i++)
  {
    c=a+b;                                                                                                  
    printf("%d ",c);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    a=b; 
    b=c;
  }
}


void main()
{
  printf("enter th enumber of which you want to find Fibonacci Series");
  int num;
  scanf("%d",&num);
  myfibo(num);
}