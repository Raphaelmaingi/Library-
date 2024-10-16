#include<stdio.h>
int main ()
{
    int i =5;
    int sum=0;
    while(i<=20){
    printf("%d\n",i);
    i++;
    sum+=i;
    }
    printf("The sum is %d",sum);
    
    return 0;
    }