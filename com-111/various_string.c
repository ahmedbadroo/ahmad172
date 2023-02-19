// Author : Ahmad Ishtiyaq
// Demonstrate the use of various string operations
#include<stdio.h>
#include<string.h>
int main(){
    char name[2];
    printf("Enter the name");
    scanf("%s",&name);
    printf("Name is:%s\n",name);
    printf("Length of string is:%d",strlen(name));
    char sur[10];
    printf("Enter your surname:");
    scanf("%s",&sur);
    printf("Name is:%s",strcat(name,sur));
    printf("Surname in lower case:%s\n",strlwr(sur));
    return 0;
}