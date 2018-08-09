#include<stdio.h>
void main()
{
   int num,rem,sum=0,temp;
   printf("ënter the number");
   scanf("%d",&num);
   temp=num;
   while(num>0)
   {
       rem=num%10;
       sum=sum(rem*rem*rem);
       num=num%10;
   }
num=temp;
if(num==sum)
{
    printf("armstrong number");
}
else
{
    printf("not an armstrong number");
}
}
