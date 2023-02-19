// Author : Ahmad Ishtiyaq
// Find factorial 

#include<stdio.h>
int main(){
    int a, fact = 1;
    printf("Enter no ");
    scanf("%d",&a);
    if(a=0)
    {
        printf("factorial of %d is 1",a);
    }
    else
    {
        for (int i =1;i<=a;i++)
        {
            fact=fact*i;

        }
        pritnf("fact of %d is %d",a,fact); 
    }
    return 0;
}