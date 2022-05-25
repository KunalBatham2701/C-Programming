#include <stdio.h>
int main()
{int n,a[100],b[100],c=0,max;
printf("enter the size :- ");
scanf("%d",&n);
printf("enter the elements \n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (a[i]==a[j])
        {
            c++;
        } 
    }
    b[i] = c;
    c=0;
}
max = b[0];
for (int i = 0; i < n; i++)
{
    if (b[i]>max)
    {
        max = b[i];
    }
}
printf("minimum number of bottles is %d",max);

return 0;
}