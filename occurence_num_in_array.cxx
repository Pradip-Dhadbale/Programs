#include<stdio.h>
void isarray(int a[20],int n)
{
	int n1,c=0,i;
	printf("Enter number to find:");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(a[i]==n1)
			c++;
	}
	printf("\n%d occurs %d times",n1,c);

}
void main()
{
	int a[20],n,i;
	printf("Enter array limit::");
	scanf("%d",&n);
	printf("Enter array elemnts:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	isarray(a,n);
}
