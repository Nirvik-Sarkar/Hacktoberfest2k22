#include<stdio.h>
void print(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void selectionsort(int A[],int low,int high)
{
    int i,j,mindx,temp;
    for ( i = low; i <=high-1; i++)
    {
        mindx=i;
        for(j=i+1;j<=high;j++)
        {
            if(A[mindx]>A[j])
            {
                mindx=j;
            }
        }
        temp=A[mindx];
        A[mindx]=A[i];
        A[i]=temp;
    }
    
}
int main()
{
    int A[] = {15, -2, 7, 3, 11, 5, -4, 0};
    int n = 8;
    print(A, n);
    selectionsort(A, 0, n - 1);
    print(A, n);
    return 0;
}
