/* Print number in words***** */

#include<stdio.h>

int main()
{
    int n,rev=0,a,b;
    printf("Enter number::");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    while(rev>0)
    {
        a=rev%10;
        switch(a)
        {
        case 1:
            printf("one-");
            break;
        case 2:
            printf("two-");
            break;
        case 3:
            printf("three-");
            break;
        case 4:
            printf("four-");
            break;
        case 5:
            printf("five-");
            break;
        case 6:
            printf("six-");
            break;
        case 7:
            printf("seven-");
            break;
        case 8:
            printf("eight-");
            break;
        case 9:
            printf("nine-");
            break;
        case 0:
            printf("zero-");
            break;
        default : 
            printf("symbols or characters--");
        }
        rev=rev/10;
    }

    return 0;
}

👍👍
/* accept character and count number of characters,
   line and words
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int count1=0,count2=0, count3=0,i=0;

    printf("Enter sentence::");
    gets(ch);

    while(ch[i] != '\0')
    {
        count1++;

        if(ch[i] == '\n')
            count3++;

        if (ch[i] == ' ' || ch[i] == '\t')
            count2++;
        i++;
    }

    printf("\ncharacters= %d",count1);
    printf("\nwords= %d",count2+1);
    printf("\nlines= %d",count3+1);

    return 0;
}
