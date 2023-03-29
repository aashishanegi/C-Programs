#include <stdio.h>

int main()
{
    int n,c;
    printf("Enter the number upto which we want fibbonacci series");
    scanf("%d",&n);
    printf("0,1,");
    c=fib(n);
    
    
}
fib (int n)
{
    int x=0;
    int y=1;
    int z;
    int a;
    if(n==1)
     return(1);
     else
     {
        for(a=1;a<n-1;a++)
        {
            z=x+y;
            printf("%d,",z);
            x=y;
            y=z;
        
        }
     }
}
