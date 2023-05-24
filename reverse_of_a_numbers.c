#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=a;i>0;)
    {
        b=i%10;
        printf("%d",b);
        i/=10;
    }
}