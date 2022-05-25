#include<stdio.h>
int main()
{int a,b,r,sum=0,r1,c=0,x=1;
    printf("enter the two integers\n");
    scanf("%d %d",&a,&b);
    r1 = a^b;
    while (r1>0)
    {
        r = r1%2;
        c = c + r*x;
        x = x*10;
        r1 = r1/2;
    }
    while (c>0)
    {
        sum = sum + c%10;
        c = c/10;
    }
    
    printf("hamming distance is %d",sum);
    return 0;
}