#include<stdio.h>
int main()
{
    int p,e,a[100],n;
    printf("enter the position, element, size");
    scanf("%d%d%d",&p,&e,&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = n; i >p; i--)
    {
        a[i]=a[i-1];
    }
    a[p]=e;
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);

    }
    

}
/
