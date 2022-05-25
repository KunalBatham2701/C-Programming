#include <stdio.h>
int main()
{int n,a,c=1,r,bn=0,z=0,j;
scanf("%d",&n);
a=n;
while (a>0)
{
    r = a%2;
    a = a/2;
    bn = bn + r*c;
    c=c*10;
}
c=1;

while (bn>0)
{
    z++;
    bn=bn/10;
}
bn = 0;
for (int i = 0; i <= n; i++)
{j=i;
    while (j>0)
{
    r = j%2;
    j = j/2;
    bn = bn + r*c;
    c=c*10;
}c=1;
    printf("%*d",z,bn);
    bn=0;
    printf("\n");
}



return 0;
}