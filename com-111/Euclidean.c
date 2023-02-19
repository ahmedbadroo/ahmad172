// Author : Ahmad Ishtiyaq
// Euclidean distance between two points
#include<stdio.h>
#include<math.h>
void main()
{
    float distance,x1,x2,y1,y2;
    printf("Enter the value of x1,x2");
    scanf("%f,%f",&x1,&x2);
    printf("Enter the value y1,y2");
    scanf("%f,%f",&y1,&y2);
    distance=sqrt((x2-x1)*(x2-x1)*(y2-y1)*(y2-y1));
    printf("distance of the two euclidean distance points is:%f",distance);
    }