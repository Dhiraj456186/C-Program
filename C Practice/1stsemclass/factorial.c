// #include<stdio.h>
// int main()
// {
//     int n,i,f=1;
//     printf("enter any number:");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//    {
//     f=f*i;
//     if(i>=1)
//     printf("%d*",i);
//    }
//    printf("factorial is %d",f);
//    return 0;
// }
// // // method 2
#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        f=f*i;
        if(i>=1)
        printf("%d*",i);
        
    }
    //printf("1\n");
    printf("factorial is %d",f);
    return 0;
}