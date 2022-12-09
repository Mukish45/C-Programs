#include<stdio.h>
#include<time.h>
int binary_search(int arr[], int l, int r, int x)
{
    if(r>=l){
        int mid = l+(r-l)/2;

        if(arr[mid]==x)
            return mid;

        if(arr[mid]>x)
            return binary_search(arr, l, mid-1, x);

        else
            return binary_search(arr, mid+1, r, x);
            }
    else
        return -1;
}

int main()
{
    time_t start, end;
    int arr[100],z;
    start = clock();
    printf("\nEnter the number of elements in the array:\t");
    scanf("%d",&z);
    printf("Enter array elements:\n");
    for(int n=0; n<z; n++)
    {
        scanf("%d",&arr[n]);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    printf("Enter the number to search using binary searching: ");
    scanf("%d", &x);

    int res = binary_search(arr, 0, n-1, x);
    if(res == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nElement found at index of %d",res);
    }
    end = clock();
    printf("\nThe calculated time complexity for Binary Search is %lf",difftime(end,start)/CLOCKS_PER_SEC);
}