#include<stdio.h>

int main()
{
    int n=0,i,j,k;
    printf("Enter pattern size: ");
    scanf("%D", &n);

    for(i=n;i>0;i--)
    {
        for(k=n; k>i; k--)
            printf("  ");
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1