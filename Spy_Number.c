 #include<stdio.h>
int main()
{
    int num,sum=0,mult=1,rem;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        mult*=rem;
        num/=10;
    }

   if(sum==mult)
    printf("Spy Number");
   else
    printf("Not Spy Number");
}
