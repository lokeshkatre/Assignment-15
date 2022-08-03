#include <stdio.h>
void SortingArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < 10; j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    SortingArray(arr,n);
    printf("\nAfter sorting array:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}