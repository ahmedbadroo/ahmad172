// Author : Ahmad Ishtiyaq
// Find vowels and consonents

#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character value");
    scanf("%c",&c);
    if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
    {
        printf("The is character is vowel =%c",c);

    }
    else
    {
        printf("The character is a consonent=%c",c);

    }
}