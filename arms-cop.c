#include <stdio.h>
#include <math.h>
int main()
{
    int n,g,l,c;
    printf("Enter the Number");
    scanf("%d",&n);
    g=arms(n);
    c=coprime(n);
    l=fact(n);
    
}
void arms (int a)
{ int sum=0,m,t,o=0,count=0;
   int temp=a;
   while(temp>0)
   {    temp=temp/10;
       count++;}
   temp=a;
   while(temp>0)
   {
       o=temp%10;
       sum=sum + pow(o,count);
       temp=temp/10;
   }
   if(sum==a)
   printf("->Armstrong number\n");
   else
   printf("->Not a Armstrong number\n");
   }
   void coprime(int a)
{    int remain,rev=0;
    while(a!=0){
        remain=a%10;
        rev=rev*10 +remain;
        a=a/10;
    }
    printf("\n->reversed Number:%d \n",rev);
    int p,hcf;
    for(p=1;p<=a;p++)
    {
    if(a%p==0&&rev%p==0){
        hcf=p;
    }
    }
    if(hcf==1)
    printf("\n->Coprime Number");
    else
    printf("\n->Not Coprime Number \n");

}
int fact(int w)
{
    int f=1;
    for(;w>1;w--){
        f=f*w;
    }
    printf("\n-> The factorial is %d",f);
}
