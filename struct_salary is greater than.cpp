#include<stdio.h>
struct employee
{
  int eno;
  char ename[20];
  float sal;
}e1[50];
int main()
{
  int i,n;
  printf("Enter limit:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	printf("Enter eno ename salary::");
  	scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
  }
  for(i=0;i<n;i++)
  {
  	if(e1[i].sal>10000)
  	{
  		printf("\nEno=%d",e1[i].eno);
  		printf("\nEname=%s",e1[i].ename);
  		printf("\nsalary=%f",e1[i].sal);
    }
  }
}

