/*Write a 'C' program to calculate area,
 & perimeter and diameter of circle using 
one function for all & use pointers.*/
  
#include<stdio.h>
void circle(float *area,float *prmtr,int *dmtr,int r);
int main()
{
  float area,prmtr;
  int r,dmtr;
  printf("Enter Radius = ");
  scanf("%d",&r);
  circle(&area,&prmtr,&dmtr,r);
  printf("\nArea = %f",area);
  printf("\nPerimeter = %f",prmtr);
  printf("\nDiameter = %d",dmtr);
return 0;
}

void circle(float *area,float *prmtr,int *dmtr,int r)
{
  *area = 3.141 * r * r;
  *prmtr = 2 * 3.14 * r;
  *dmtr = 2 * r;
}