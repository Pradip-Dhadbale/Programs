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