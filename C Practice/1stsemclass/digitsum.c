// // method 1
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("enter any number: ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         sum=sum+n%10;
//         n=n/10;
//     }
//     printf("sum of digit=%d",sum);
//     return 0;
// }
// method 2
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    for(n=n; n>0; n=n/10)
    {
        sum=sum+n%10;
    }
    printf("sum of digit=%d",sum);
    return 0;
}