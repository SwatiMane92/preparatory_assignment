#include<stdio.h>

struct employee
{
    char fname[10];
    char lname[10];
    double salary;
};
void emp_init(struct employee* e)
{
    printf("Enter First Name of employee :\n");
    scanf("%s",&e->fname);
    printf("Enter Last Name of employee :\n");
    scanf("%s",&e->lname);
    printf("Enter salary of employee :\n");
    scanf("%lf",&e->salary);
}
void emp_display(struct employee* e)
{
    printf("First Name:%s \t",&e->fname);
    printf("Last Name:%s \t",&e->lname);
    printf("Salary :%lf\t",e->salary);
    printf("\n");
}

void set_salary(struct employee *e, int a)
{
   e->salary=e->salary+e->salary*a/100;
}


int main()
{
    struct employee e1, e2;
    emp_init(&e1);
    emp_display(&e1);
    emp_init(&e2);
    emp_display(&e2);
    set_salary(&e1, 10);
    set_salary(&e2, 10);
    printf("Employee salary after increment:\n ");
    emp_display(&e1);
    emp_display(&e2);

    return 0;
}