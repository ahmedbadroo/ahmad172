// Author : Ahmad Ishtiyaq
// Check wheather no is prime 

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number to check prime or not");
    scanf("%d",&n);
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
    if(count==0)
    {
        printf("%d is prime no ",n);
    }
    else
    {
        printf("%d is not prime no ",n);
    }
    return 0;

}