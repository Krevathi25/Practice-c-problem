#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("first %d fibonacci numbers are \n",n);
    printf("%d",a);
    printf("%d",b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;

    }
}
