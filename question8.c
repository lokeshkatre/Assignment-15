#include <stdio.h>
void print_unique(int arr[], int n)
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
    printf("\nUnique elements are:");
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == 0)
            printf("%d ", arr[i]);
    }
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
    print_unique(arr, n);
}