// // s=1^2+2+3^2+4+5^2+...{Method 1}
// #include<stdio.h>
// int main()
// {
//     int n,s1,s2,s,i;
//     printf("Enter any value of n:\n");
//     scanf("%d",&n);
//     s1=0; s2=0;
//     for(i=1; i<=n; i++)
//     {
//         s1=s1+i*i;
       
//     }
//      printf("A is %d\n",s1);
    
//     for(i=2; i<=n; i=i+2);
//     {
//         s2=s2+i;
       
//     }
//     printf("B is %d\n",s2);
//     s=s1+s2;
//     printf("Total sum is %d",s);
// }
// // {Method 2} is not working properly:why??
#include<stdio.h>
int main()
{
    int n,i,s,s1,s2;
    printf("Enter any value of n:\n");
    scanf("%d",&n);
    s=0;
    for(i=1; i<=n; i++)
    {
        
        {
            s1=s+i*i;
        }
         printf("s1 is %d\n",s1);
        
        if(i%2==0)
        {    
            s2=s2+i;
        } printf("s2 is %d\n",s2);
        s=s1+s2;
        printf("sum is %d",s);
        return 0;
    }
}

