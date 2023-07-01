/* accept number and judge number is palindrome
   or not  */

#include<stdio.h>

int main()
{
    int n,rev=0,a,b,flag1=0,flag2=0;

    printf("Enter number::");
    scanf("%d",&n);

    b=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }

    if(rev==b)
    {
        printf("\nnumber is palindrome--");
    }
    else
    {
        printf("\nnumber is not palindrome--\n");
    }

    return 0;
}