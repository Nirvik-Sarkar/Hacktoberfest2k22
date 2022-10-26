#include<stdio.h>
int main()
{
    int n,m,c,i,j,k,s=0;
    printf("Enter the no. of rows you want in the 1st matrix");
    scanf("%d",&n);
    printf("Enter the no. of columns you want in the 1st matrix");
    scanf("%d",&m);
    printf("Enter the no. of columns you want in the 2nd matrix");
    scanf("%d",&c);
    int A[n][m], B[m][c],C[n][c];
    printf("Enter the data for 1st matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter the element for the %d th row and %d th column",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the data for the 2nd matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element for the %d th row and %d th column",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("1st matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<c;j++)
       {
        C[i][j]=0;
        for(k=0;k<n;k++)
        {
            s=A[i][k]*B[k][j];
            C[i][j]+=s;
        }
       }
    }
    printf("product matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}