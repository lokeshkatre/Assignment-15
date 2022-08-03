#include <stdio.h>
void smallest(int arr[],int n)
{
  int min=arr[0];
  for (int i = 0; i < n; i++)
        if (min > arr[i])
            min = arr[i];
    printf("The smallest element of array is %d", min);
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array :");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    smallest(arr,n);
    return 0;
}