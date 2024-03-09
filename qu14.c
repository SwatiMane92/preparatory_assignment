//to check if string is palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("enter the string :");
    gets(str);
    int i,len,flag = 0;
    len = strlen(str);
    for(i = 0;i<len; i++){
        //check if string is palindrome or not
        if(str[i] != str[len-i-1]){
            flag= 1;
            break;
        }
    }
    if(flag)
       printf("%s is not palindrome", str);

    else
       printf("%s is palindrome", str);
    return 0;      
}