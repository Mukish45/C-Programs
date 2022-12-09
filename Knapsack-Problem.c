#include<stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);


    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                           wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
int main()
{
    int n,w;
    float a;
    printf("Enter the maximum weight:\t");
    scanf("%d",&w);
    printf("Enter the number of objects to be inserted: ");
    scanf("%d",&n);
    int object[n], profit[n], weight[n];
    float ratio[n],des_array[n];
    printf("\nEnter the objects:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&object[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the profit for %d:\n", object[i]);
        scanf("%d",&profit[i]);
    }
    printf("\n---------------------------------------------------\n");
    for(int i=0; i<n; i++)
    {
        printf("\nEnter the weight for %d:\n", object[i]);
        scanf("%d",&weight[i]);
    }
    printf("\n---------------------------------------------------\n");
    for(int i=0; i<n; i++)
    {
        ratio[i] = (float)profit[i] / (float)weight[i];
    }

    printf("%d", knapSack(w, weight, profit, n));
    return 0;
}
