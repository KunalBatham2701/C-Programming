#include <stdio.h>
int main()
{
int a=0,b=1,r,n;
printf("enter the integer : ");
scanf("%d",&n);
printf("0, 1, ");
for (int i = 1; i <= n-2; i++)
{   r=a+b;
    a=b;
    b=r;
    printf("%d, ",r);
}
printf("\b\b ");
return 0;
}