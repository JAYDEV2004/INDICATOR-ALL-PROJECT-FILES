#include<stdio.h>

int main()
{
    int size=0;
    char j[1000], *jd;
    
    printf("ENTER THE STRING = \n");
    gets(j);
    
    jd = j;
    
    while(*jd!='\0')
    { 
      size++;
      jd++;
    }
    printf("\n");
    printf("YOUR STRING %s AND\n THEIR SIZE  = %d ",j,size);
    return 0;
}