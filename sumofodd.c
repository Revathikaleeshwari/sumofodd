#include<stdio.h>
int main()
{
int index,begnum,endnum,sum=0;
printf("program for sum of odd number in the given range");
printf("Enter begnum.:");
scanf("%d",&begnum);
printf("Enter endnum.:");
scanf("%d",&endnum);
index=begnum;
if((begnum%2)==0)
index=begnum+1;
for(;index<=endnum;index+=2)
{
sum=sum+index;
}
printf("The sum of odd number between %d and %d is:%d",begnum);
return 0;
}
