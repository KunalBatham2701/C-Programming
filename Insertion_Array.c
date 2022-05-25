#include <stdio.h>
int main()
{int n,p,e,a[100],b,q,t;
printf("enter the total number of elements :- ");
scanf("%d",&n);
printf("enter the elements of the array :- ");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the total number of elements to be insert :- ");
scanf("%d",&t);
for(int j=0;j<t;j++)
{
printf("enter the position :- ");
scanf("%d",&q);
p = q-1;
printf("enter the element :- ");
scanf("%d",&e);
for (int i = n; i > p; i--)
{
    a[i] = a[i-1];
}
a[p] = e;
}
for (int i = 0; i < n+t; i++)
{
    printf("%d ",a[i]);
}
return 0;
}