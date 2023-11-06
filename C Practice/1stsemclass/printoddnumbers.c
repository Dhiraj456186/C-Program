// It is taking 5 odd nubers from keyboard entry, it is not printing the odd numbers itself
// #include<stdio.h>
// int main()
// {
//     int n, count=0;
//     while(count<5)
//     {
//         printf("enter any value of n:\n");
//         scanf("%d",&n);
//         if(n%2!=0)
//         {
//             count=count+1;
//             printf("%dth value=%d\n",count,n);
//         }
//     }
//     return 0;
// }
// {Method 2}
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("The odd numbers are:\n");
    for(i=1; i<=n; i++)
    {
        printf("%d\n", 2*i-1);
    }
    return 0;
   
}