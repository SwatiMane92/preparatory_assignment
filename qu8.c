//a program to read the name of a student(studentName), roll Number(rollNo) and marks(totalMarks) obtained
#include<stdio.h>
struct student{
    char studentName[10];
    char rollNo[10];
    float totalMarks;
};
int main(){
    struct student s;
    printf("Enter the information of student :\n\n");

    printf("Enter studentName : ");
       scanf("%s",&s.studentName);

    printf("Enter rollNo : ");
       scanf("%s", &s.rollNo);

    printf("Enter totalMarks : ");
       scanf("%f",&s.totalMarks);

    printf("\nDisplaying Information\n");

 printf("studentName : %s\n", s.studentName);
 printf("rollNo : %s\n", s.rollNo);
 printf("totalMarks : %f\n", s.totalMarks); 
    return 0;   

}