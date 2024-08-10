#include <stdio.h>

int main(void)
{
    int r, c;
    printf("enter rows:");
    scanf("%d", &r);
    printf("enter coloum:");
    scanf("%d", &c);
    int arr[r][c];
    int brr[r][c];
    int sum[r][c];
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("enter [%d], [%d]:", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("enter [%d], [%d]:", i, j);
                scanf("%d", &brr[i][j]);
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {

                sum[i][j] = arr[i][j] + brr[i][j];
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf(" %d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("your rows and columns are not equal");
    }
    return 0;
}
