#include <stdio.h>

int findMaximum(int arr[], int n)
{
    int max_ele = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max_ele)
            max_ele = arr[i];
    }
    return max_ele;
}

int main()
{
    int arr[] = {2, 7, 12, 25, 4, 57, 27, 44};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("The given array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The maximum element which is increasing then decreasing is %d", findMaximum(arr, n));
    getchar();
    return 0;
}
