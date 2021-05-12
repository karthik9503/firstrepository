
#include<stdio.h>
int main()
{
    int count,n,factor,i,j;
    printf("print n prime numbers where n is");
    scanf("%d",&n);
    count=0, i=1;
    while(count<n)
    {
        factor=0;
    for(j=1;j<=i;j++)
    {
     if(i%j==0)
     {
        factor++;
     }
    }
    if(factor==2)
    {
        printf("%d",i);
    }
    if(count<n)
    {
        i++;
    }
    count++;

    }
    return 0;


}

