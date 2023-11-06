#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n>=0)
        {
            printf("%d is positive evnen number\n",n);
        }
        else
        {
            printf("%dis negative even number\n",n);
        }
    }
    else
    {
        if(n>=0)
        {
            printf("%d is positive odd number",n);
        }
        else
        {
            printf("%d is negative odd number",n);
        }

    }
    return 0;
}