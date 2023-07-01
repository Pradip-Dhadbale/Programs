/* maximum array element using function */

#include<stdio.h>

int main()
{
    void accept (int arr[],int n);
    void display(int arr[],int n);
    int maximum (int arr[],int n);

    int n,arr[100];
    printf("Enter limit::");
    scanf("%d",&n);
    accept (arr,n);
    display(arr,n);
    // Maximum(arr,n);

    printf("\nmax element=%d", maximum(arr,n));
}
void accept (int arr[100],int n)
{
    int i;
    printf("enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display (int arr[100],int n)
{
    int i;
    printf("array elements=\n");
    for(i=0; i<n; i++)
    {
        printf("::=%d\n",arr[i]);
    }
}
int maximum (int arr[100],int n)
{
    int i,max=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}