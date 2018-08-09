#include<stdio.h>
void main()
    {
    int fact=1,n=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n!=0)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial is %d",fact);

}
