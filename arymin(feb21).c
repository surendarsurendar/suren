#include<stdio.h>
#incude<conio.h>
void main()
{
int a[100],i,min=0,n;
  clrscr();
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("Enter the values");
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
  if(min>a[i])
  {
    min=a[i];
  }
}
  printf("%d",max);
}
