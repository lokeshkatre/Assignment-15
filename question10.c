#include <stdio.h>
void element_frequency(int arr[], int n)
{
    int fre[n];
    int visited = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                fre[j] = visited;
                count++;
            }
        }
        if (fre[i] != visited)
            fre[i] = count;
    }
    printf("\nFrequency of all elements are:\n");
    for (int i = 0; i < n; i++)
    {
        if(fre[i]!=visited)
            printf("%d-%d\n", arr[i], fre[i]);
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
    element_frequency(arr, n);
    return 0;
}