#include<stdio.h>
#include<math.h>
int main()
{
    int r,c;
    printf("Enter the no. of rows and columns\nPlease enter the same of rows and columns\n");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int i,j,k;
    for(i=0;i<r;i=i+1)
    {
        for(j=0;j<c;j=j+1)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r/2;i=i+1)
    {
        for(j=i;j<(c-i-1);j=j+1)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        for(k=i,j=(c-i-1);k<(c-i-1);k=k+1)
        {
            printf("%d ",a[k][j]);
        }
        printf("\n");
        for(k=(c-i-1),j=(c-i-1);k>i;k=k-1)
        {
            printf("%d ",a[j][k]);
        }
        printf("\n");
        for(j=(c-i-1);j>i;j=j-1)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    if(r%2!=0)
    {
        printf("%d",a[r/2][c/2]);
    }
    return 0;
}