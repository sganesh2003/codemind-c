#include<stdio.h>
#include<math.h>
int prime(int n)
{
    if(n!=1)
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }    
    
    else
    return 0;
}
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        c++;
    }
    printf("%d",c);
}

