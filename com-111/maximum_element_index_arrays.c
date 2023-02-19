// Author : Ahmad Ishtiyaq
// Find max element and index in the array

#include<stdio.h>
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter value of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        printf("Value for arr [%d] is %d",i ,arr[i]);

    }
    int j = 0 ,h =0;
    for (int i =0; i<a;i++)
    {
        if (arr[i]>j){
            j=arr[i];

        }
        if(j==arr[i]){
            h=i;
        }
    }

    printf("/n Largest number is :%d\n",j);
    printf("Index is : arr[%d]",h);
    return 0;
    
}