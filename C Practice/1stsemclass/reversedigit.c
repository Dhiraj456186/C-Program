//method 1
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter any number: ");
//     scanf("%d",&n);
//     printf("reverse of the number:");
//     while(n>0)
//     {
//         printf("%d",n%10);
//         n=n/10;
//     }
//     return 0;
// }
// method 2
#include<stdio.h>
int main()
{
    int n,r=0;
    printf("enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    printf("reverse number=%d",r);
    return 0;
}
