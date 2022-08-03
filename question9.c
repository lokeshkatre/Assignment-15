#include <stdio.h>

void Merge_array(int arr[], int arr2[], int n)
{
    int arr3[2 * n];
    for (int i = 0; i < 2*n; i++)
    {
        if(i<n)
        arr3[i]=arr[i];
        else
        arr3[i]=arr2[i-n];
    }
    // sorting array
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = i+1; j <2*n; j++)
        {
            if (arr3[j] < arr3[i])
            {
                int temp;
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("\n Merged Sorted array is:\n");
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d ",arr3[i]);
    }
    
}
int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter first array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int arr2[n];
    printf("Enter second array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    Merge_array(arr, arr2, n);
}