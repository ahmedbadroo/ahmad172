// Author : Ahmad Ishtiyaq
// Check wheather a number is armstrong or not

#include<stdio.h>
int main()
{
    int a = 0, j=0,sum=0;
    printf("Enter the no");
    scanf("%d",&a);
    int g=a;
    while(a>0){
        j=a%10;
        sum=sum+(j*j*j);
        a=a/10;
        if(g==sum)
        {
            printf("%d is an armstrong no",g);

        }
        else{
            printf("%d is not armstrong no",g);
        }
    }
    return 0;
}