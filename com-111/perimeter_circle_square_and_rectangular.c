// Author : Ahmad Ishtiyaq
// Area perimeter of square circle and rectangle 

#include<stdio.h>
int main()
{
    int side;
    printf("Enter the side of Square");
    scanf("%d",&side);
    printf("Area of square is:%d",side*side);
    printf("perimeter of square is:%d",4*side);
    int l ,b;
    printf("Enter the length of rectangle ");
    scanf("%d",&l);
    printf("Enter the breath of rectangle:");
    scanf("%d",&b);
    printf("perimeter of square is:%d",l*b);
    printf("perimeter of rectangular is :%d\n",2*(l+b));
    int radius;
    float perimeter,area, pi= 3.14;
    printf("Enter the radius:");
    scanf("%d",radius);
    perimeter =2*pi*radius;
    area=radius*pi*radius;
    printf("Area of circle is :%f\n",area);
    printf("peritmeter of circle is %f\n",perimeter);
    return 0;
}