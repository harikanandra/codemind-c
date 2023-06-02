#include<stdio.h>
int main()
{
    int n,sum=0,m,r;
    scanf("%d",&m);
    n=m*m;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    if(sum==m)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}