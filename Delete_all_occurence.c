#include <stdio.h>
int main()
{int n,e,c=0,m;
printf("Enter the size :-");
scanf("%d",&n);
m=n;
int a[n],b[n];
printf("enter the elements :- ");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
for (int i = 0; i < n; i++)
{
    b[i] = a[i];
}

printf("enter the element you want to delete :-");
scanf("%d",&e);

start:
for (int i = 0; i < n; i++)
{
    if(e==a[i])
    {
    for (int j = i; j < n; j++)
    {
        a[j] = a[j+1];
    }
    }
}
for (int i = 0; i < n; i++)
{
    if (e==a[i])
    {
        goto start;
    }
    
}
for (int i = 0; i < n; i++)
{
    if(e==b[i])
    {
       c=1;
        
    }
}

for(int i=0;i<n;i++)
{
    if(e==b[i])
    {
        m--;
    }
}
if(c==0)
{
    printf("%d element not found",e);
goto end;
}
if(m>0)
{
for (int i = 0; i < m; i++)
{
    printf("%d ",a[i]);
}
}
else
{
    printf("all elements are deleted");
}

end:
return 0;
}