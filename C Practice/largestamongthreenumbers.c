#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Eenter any three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d is highest\n",a);
    }
    if(b>=a && b>=c)
    {
        printf("%d is highest\n",b);
    }
    if(c>=a && c>=b);
    {
        printf("%d is highest\n",c);
    }
    return 0;
}