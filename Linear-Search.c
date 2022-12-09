#include<stdio.h>
#include<time.h>
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
            return i;
    return -1;

}

int main()
{
    time_t start, end;
    int arr[100],z;
    int x, n, res;
    start = clock();
    printf("\nEnter the number of elements in the array:\t");
    scanf("%d",&z);
    printf("Enter array elements:\n");
    for(int n=0; n<z; n++)
    {
        scanf("%d", &arr[n]);
    }
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the number to search using binary searching: ");
    scanf("%d", &x);
    res = linear_search(arr, n, x);
    if(res==-1)
    {
        printf("\nElement is not present in the array\n");
    }
    else
    {
        printf("\nElement is found in the array at the index of %d\n",res);
    }
    end = clock();
    printf("\nThe calculated time complexity for Linear Search is %lf",difftime(end,start)/CLOCKS_PER_SEC);
}
