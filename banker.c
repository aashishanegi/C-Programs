#include <stdio.h>

int main()
{  int r,c,i,j,allo[100][100],max[100][100],need[100][100],avail[100],seq[3],count=0,x=0;
    printf("Enter the no of process:");
    scanf("%d",&r);
    printf("Enter the no of resource:");
    scanf("%d",&c);
    
    printf("Enter the max for each process\n");
    
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("Enter the max process%d resource%d:",i+1,j+1);
        scanf("%d",&max[i][j]);
        
    }
    printf("Enter the allocation for each process \n");
    
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("Enter the allocation for  process%d  resource%d:",i+1,j+1);
        scanf("%d",&allo[i][j]);
    }
    
    for(i=0;i<r;++i)                              
    for(j=0;j<c;++j)
    {
        need[i][j]=max[i][j] - allo[i][j];
    }
    printf("\nNeed for each process\n");
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("%d  ",need[i][j]);
        
        if(j==c-1){
            printf("\n\n");
        }
    }
    
    printf("\nMax for each process\n");
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("%d  ",max[i][j]);
        
        if(j==c-1){
            printf("\n\n");
        }
    }
    printf("\n Aloocation for each process\n");
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("%d  ",allo[i][j]);
        
        if(j==c-1){
            printf("\n\n");
        }
    }
    
    for(j=0;j<c;++j)
    {
        printf("Enter the available no for resource(%d):",j+1);
        scanf("%d",&avail[j]);
    }
    for(i=0;i<r;++i){
    for(j=0;j<c;++j){
    if(avail[j]>=need[i][j]){
        count=count+1;
    }
    }
    if (count==3){
        seq[0]=i+1;
        printf("p%d",seq[0]);
    }
    
}
    for(j=0;j<c;++j) {  
        x=seq[0];
    avail[j]=avail[j]+need[x][j];
    }
    for(i=0;i<r;++i){
    for(j=0;j<c;++j){
    if(avail[j]>=need[i][j]){
        count=count+1;
    }
    }
    
    if (count==3){
        seq[1]=i+1;
        printf("p%d",seq[1]);
    
    }
}    
}
