//program to input n numners on command line argument and calculate maximum of them
#include<stdio.h>
#include<stdlib.h>
int main(int arg, char*arr[]){
    int i, j=1, a, b;
    for(i=1;i<arg;i++)
    {
        a = atoi(arr[j]);
        b = atoi(arr[i]);
        if(a<=b)
        j=i;
    }
    printf("Maximum Number is %d :", atoi(arr[j]));
    return 0;
}