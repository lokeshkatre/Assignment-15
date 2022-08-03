#include<stdio.h>
void Read_and_Reverse(int arr[],int n)
{
    printf("\narray elements are:");
    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    printf("Displaying array in reverse order:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[n-i-1]);
    
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    Read_and_Reverse(arr,n);
    return 0;
}