#include <stdio.h>
int Adjacent_Duplicate(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if (Adjacent_Duplicate(arr, n) != 0)
        printf("the adjacent duplicate element is %d", Adjacent_Duplicate(arr, n));
    else
        printf("No Adjacent duplicate element");
    return 0;
}