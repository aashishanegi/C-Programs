#include <stdio.h>
int search(int*,int,int);
int main()
{
    int n;
    printf("Enter the size of integer array-");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the array elements-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("\n Enter the number to be searched in the array-");
    scanf("%d",&target);
    int ans=search(arr,target,n);
    if(ans!=-1){
    printf("\n The greatest elements is present at index %d",(ans+1));
    }
    else{
        printf("\n Target element not found");
    }
    return 0;
}
int search(int arr[],int target,int n)
{
    int l=0;
    int u=n-1;
    while(l<=u){
        int mid=l+(u-1)/2;
        if(target<arr[mid]){
            u=mid-1;
        }
        else if(target>arr[mid]){
            l=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
