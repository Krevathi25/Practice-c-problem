#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int a[10];
    printf("\n enter the value of n:");
    scanf("%d",&n);
    printf("\nenter array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n the sum is %d",sum);
return 0;
}
