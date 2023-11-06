#include<stdio.h>
int main()
{
    int n,max=0;
    printf("enter any number:");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    for(n=n; n>0; n=n/10)
    {
        if(n%10>max)
        {
            max=n%10;
        }
    }
    printf("maximum digit=%d",max);
    return 0;
}