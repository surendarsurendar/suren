#include <stdio.h>
int main()
{
    int n, i, flag;
    printf("Enter a positive number\n");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
        flag==o;
                  break;
        }
    }
    if (flag==0)
        printf("\nYES, %d is a prime number.",n);
    else
        printf("NO, %d is not a prime number.",n);
    return 0;
}
