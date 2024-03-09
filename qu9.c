//Accept an integer number and when the program is executed print the binary, octal and hexadecimal equivalent of given number
#include <stdio.h>
void binary(int n)
{
    int bin[10], i;
    
    for(i=0;n>0;i++)
    {
        bin[i]=n%2;
        n=n/2;
    
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    
}

void hex(int n)
{
    int hex[10], i;
    for(i=0;n>0;i++)
    {
        hex[i]=n%16;
        n=n/16;
    
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",hex[i]);
    }
    
}

void octal(int n)
{
    int oct[10], i;
    for(i=0;n>0;i++)
    {
        oct[i]=n%8;
        n=n/8;
    
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",oct[i]);
    }
    
}


int main() 
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Given number is: %d\n",n);
    printf("Binary conversion: ");
    binary(n);
    printf("\nOctal conversion: ");
    octal(n);
    printf("\nHexadecimal conversion: ");
    hex(n);
   
   return 0;
    
}