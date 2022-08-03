#include <stdio.h>
void Largest(int arr[],int n)
{
  int max=arr[0];
  for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    printf("The largest element of array is %d", max);
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
    Largest(arr,n);
    return 0;
}