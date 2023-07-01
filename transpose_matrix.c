#include<stdio.h>

int main()
{
    int a[20][20],i,j,c,r,b[20][20];
    printf("Enter rows and columns =");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix = ");
    
    for(i=0 ; i<r ; i++)
    {
     for(j=0 ; j<c ; j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    printf("Matrix = \n");
    for(i=0 ; i<r ; i++)
    {
     for(j=0 ; j<c ; j++)
    {
    printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    
    
    for(i=0 ; i<r ; i++)
    {
     for(j=0 ; j<c ; j++)
    {
      b[i][j] = a[j][i];
    }
    }
    printf("Transpose of Matrix =\n");
    for(i=0 ; i<r ; i++)
    {
     for(j=0 ; j<c ; j++)
    {
    printf("%d\t",b[i][j]);
    }
    printf("\n");
    }
    return 0;
}
