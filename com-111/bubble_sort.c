// Author : Ahmad Ishtiyaq
// Sort array using bubble sorting

#include<stdio.h>
int main(){
    int a=0,temp=0;
    printf("Enter the size");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        printf("Enter value of arr[%d]",i);
        scanf("%d",&arr[i]);
        for(int i=0;i<a;i++)
        {
            for(int k=0;k<a-1;k++)
            {
                if(arr[k],arr[k+1]){
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k=1]=temp;
                }
            }
        }
    printf("\n values after sorting\n");
    for(int i=0;i<a;i++)
    {
        printf("Values for arr[%d]is[%d]is%d\n",i,arr[i]);
    }
    }
}