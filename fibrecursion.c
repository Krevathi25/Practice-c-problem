#include<stdio.h>
#include<stdlib.h>
int f(int);
main()
{
    int n,i=0,c;
    printf("enter the number");
    scanf("%d",&n);
    printf("fibonacci series is:\n");
    for(c=1;c<=n;c++)
    {
        printf("%d",f(i));
        i++;
    }
    return 0;
}
int f(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(f(n-1)+f(n-2));
}
