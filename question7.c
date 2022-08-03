#include <stdio.h>
int duplicate(int arr[], int n)
{
    int count = 0;
    int arr2[n];
    for (int i = 0; i < n; i++)
        arr2[i] = 0;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr2[i]++;
                arr2[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] != 0)
            count++;
    }

    return count;
}

int main()
{
    int n;
    printf("Enter no. of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = duplicate(arr, n);
    printf("\nNo. of duplicate elements are %d", count);
    return 0;
}