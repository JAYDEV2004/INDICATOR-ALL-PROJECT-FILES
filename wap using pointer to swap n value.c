#include<stdio.h>

int main()
{
    int n,n1,n3;
    printf("ENTER THE A VALUE = ");
    scanf("%d",&n);
    printf("ENTER THE B VALUE = ");
    scanf("%d",&n1);
    
    int *p = &n;
    int *p1 =&n1;
    n3=*p;
    *p=*p1;
    *p1=n3;
    
    printf("A VALUE = %d",*p);
    printf(" B VALUE = %d",*p1);
    
}