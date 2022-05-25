#include <stdio.h>
int main()
{int n,e;
printf("enter number of elements :- ");
scanf("%d",&n);
int a[n];
printf("enter all elements of the array :- \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element which you want to remove :- ");
scanf("%d",&e);
for (int i = 0; i < n; i++)
{
    if(a[i]==e)
    {
         for(int j=i;j<n;j++)
        {
            a[j] = a[j+1];
        }
   }
}
for (int i = 0; i < n-1; i++)
{
    printf("%d ",a[i]);
}


return 0;
}