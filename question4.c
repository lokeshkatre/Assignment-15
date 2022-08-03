#include <stdio.h>
void RotateLeft(int arr[], int size, int n)
{
    int a[n];
    // we will first store n elements from first in array a
    for (int i = 0; i < n; i++)
        a[i] = arr[i];
    // then we rotate array arr
    for (int i = 0; i < size - n; i++)
        arr[i] = arr[i + n];
    // remaing element will be restored in last accordingly
    for (int i = 0; i < n; i++)
        arr[i + n + 1] = a[i];
}
int main()
{
    int size, n;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array :");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter no. of position to rotate array to left:");
    scanf("%d", &n);
    int a[n];
    RotateLeft(arr, size, n);
    printf("\nAfter rotating array by %d position :", n);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}