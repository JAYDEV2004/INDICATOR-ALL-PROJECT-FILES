#include<stdio.h>

int main()
{
    int n;
    printf("ENTER THE ARRAY SIZE = ");
    scanf("%d",&n);
    
    int a[n],i,*j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    j=&a[n-1];
    
    for(i=0;i<n;i++)
    printf("%d\t",*j--);
    
    return 0;
}