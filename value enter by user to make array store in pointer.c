#include<stdio.h>
int main()
{
	int n;
	
	printf("ENTER THE ARRAY SIZE = ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int *p;
	
	p= &a;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%u =>  %d",p+i,*(p+i));
}

}