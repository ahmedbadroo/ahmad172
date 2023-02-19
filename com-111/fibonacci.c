// Author : Ahmad Ishtiyaq
// Find fibonacci sequence

#include<stdio.h>
int main(){
    int a;
    printf("Enter no of element");
    scanf("%d",&a);
    int n1=0,n2=1,n3;
    pritnf("%d\n",n1);
    printf("%d\n",n2);
    for(int i=2;i<a;i++)
    {
        n3 = n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}