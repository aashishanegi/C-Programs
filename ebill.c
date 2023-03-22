#include <stdio.h>

int main()
{   int a,b,cost;
    printf("Electricity Bill \n");
    printf("Enter the unit of electricity used\n");
    scanf("%d",&a);
    printf("Choose your usage type \n" "1 - Commercial Usage\n" "2 - Home Usage\n");
    scanf("%d",&b);
    if(b==1){
        cost=a*10;
    }
    else
    cost=a*6;
    
    printf("Cost of Electricity = %d",cost);
}
