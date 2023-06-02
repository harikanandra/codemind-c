#include<stdio.h>
int main()
{
    int i,s,r,k;
    int c=0;
    scanf("%d%d%d",&i,&r,&k);
    for(s=i;s<=r;s++)
    {
        if(s%k==0)
        c+=1;
    }
    printf("%d",c);
}