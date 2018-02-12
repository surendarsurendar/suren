
#include<stdio.h>
#include<conio.h>
int main()
{
int num,a,b,c=0;
printf("\n enter the number to check whether it is armstrong or not");
scanf("%d",num);
a=num;
b=a%10;
c=c+b*b*b;
a=a/10;
if(c==num)
{
printf("\n yes it is armstrong number");
}else
{
printf("\n no,it is not a armstrong number");
}
return 0;
}
