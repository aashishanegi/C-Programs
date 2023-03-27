#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
union product{
    char productn[15];
   float ppp;
    int quan;
    float amount;
}p;
int main()
{

   printf("Enter product name\n");
   scanf("%s",&p.productn);
   printf("Enter the price per unit for product\n");
   scanf("%f",&p.ppp);
   printf("Enter the quantity of product\n");
   scanf("%d",&p.quan);
   p.amount=p.ppp*p.quan;
   
   printf("Product Name %s \n",p.productn);
   printf("price per unit %f \n",p.ppp);
   printf("Quantity %d \n",p.quan);
   printf("amount %f",p.amount);
    
    return 0;
}

