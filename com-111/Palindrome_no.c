// Author : Ahmad Ishtiyaq
// Check wheather a string is a palindrome

#include<stdio.h>
int main()
{
    int n,c=1;
    printf("Enter the value ");
    scanf("%d",&n);
    char a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value for a [%d]",i);
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Value for a[%d]is %d\n",i,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1])
        {
            c=1;
        }
    n--;
    }
    if (c==1){
        printf("Not a palindrome\n");
    }
    else
    {
    printf("palindrome no\n");
    }
    return 0;
}