#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three values:\n");
    scanf("%d %d %d",&a,&b,&c);
    a>b?(a>c? printf("largest value=%d",a):printf("largest value=%d",c)):(b>c? printf("largest value=%d",b):printf("largest value=%d",c));
    return 0;
}