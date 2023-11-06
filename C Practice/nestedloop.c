// to print largest among three numbers using nested loop
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three values :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("largest value = %d",a);
        }
    }
    else // c>=a
    {
        printf("largest value = %d",c);
    }
   
    if(b>c)
    {
        printf("largest value = %d",b);
    }
    else //c>=b
    {
        printf("largest value = %d",c);
    }
    return 0;
}