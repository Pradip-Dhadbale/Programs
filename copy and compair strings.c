/* Write a program to perform the following operations on two
strings using standard library functions:
a. Copy 
b. Compare  */

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int k;
    printf("Enter 1st string..");
    gets(s1);
    printf("Enter 2st string..");
    gets(s2);
    k=strcmp(s1,s2);
    if(k==0)
    printf("String is equal..\n");
    else if(k>0)
    printf("first string is greater\n");
    else if(k<0)
    printf("second string is greater\n");

    printf("\ncopied string=%s",strcpy(s1,s2));
}

