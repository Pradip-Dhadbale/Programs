/* Previous and next character**** */

#include<stdio.h>
int main()
{
    char ch,i,p,d;
    printf("Enter character::");
    scanf("%c",&ch);
  //  for(i='A';i<='Z';i++)
    if(ch>='A' && ch<='Z')
    {
      p=ch-1;
      d=ch+1;    
    }
      printf("\nprevious character=%c",p);
      printf("\nnext character=%c",d);
    return 0;
}

*******Distance between 2 coordinates 

#include<stdio.h>
int main()
{
    int x,y,n,i;
    printf("Enter X coordinates::");
    scanf("%d",&x);
    printf("Eneter y coordinates::");
    scanf("%d",&y);
    for(i='x';i<'y';i++)
  //  if(n>'x' && n<'y')
    { 
       n=x-1;     
    }   
    printf("distance between=%d",n);
    return 0;
}

👍👍
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