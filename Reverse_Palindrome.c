#include<stdio.h>
int update(int n)
{
    int x=0,t=n;
    while(n!=0)
    {
        x=x*10+(n%10);
        n=n/10;
    }
    return (x+t);
}
int pal(int n)
{
    int t=n,x=0;
    while(n!=0)
    {
        x=x*10+(n%10);
        n=n/10;
    }
    if(t==x)
    return 1;
    else
    return 0;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        n=update(n);
        if(pal(n))
        {
            printf("%d",n);
            return 0;
        }
    }
}