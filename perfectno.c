#include<stdio.h>
void main()
{
    int num,i,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        for(i=1;i<num;i++)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
}
