#include <stdio.h>
int main()
{int n,p;
printf("enter number of elements :- ");
scanf("%d",&n);
int a[n];
printf("enter all elements of the array :- \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the position :- ");
scanf("%d",&p);
for (int i = p-1; i < n; i++)
{
    a[i] = a[i+1];
}
for (int i = 0; i < n-1; i++)
{
    printf("%d ",a[i]);
}

return 0;
}