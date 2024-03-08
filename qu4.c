/*Q4. Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard. Assign grade 
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F */
#include<stdio.h>
int main ()
{printf("enter the marks for each subject out of 20");
int sub1,sub2,sub3,sub4,sub5;
scanf("%d",&sub1);
scanf("%d",&sub2);
scanf("%d",&sub3);
scanf("%d",&sub4);
scanf("%d",&sub5);
if (!((0<=sub1>=20))&((0<=sub2>=20))&((0<=sub3>=20))&((0<=sub4>=20))&((0<=sub4>=20)))
 printf("invalid marks of  subject ");

else 
{int Total_Marks=  sub1+sub2+sub3+sub4+sub5;
printf("%d",Total_Marks);

if (Total_Marks >= 90)
printf("Grade: Ex");
else if(80 > Total_Marks >= 70)
printf("Grade: A");
else if(70 > Total_Marks >= 60)
printf(" Grade: C");
else
printf("Grade: F");
}
}