#include <stdio.h>
int i, j;
void accept(int r1, int c1, int a1[r1][c1])
{
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            printf("\n row[%d] column[%d]:", i + 1, j + 1);
            scanf("%d", &a1[i][j]);
        }
}
void sum_row(int row1, int r2, int c2, int a2[r2][c2])
{
    int res = 0;
    i = row1;
    for (j = 0; j < c2; j++)
        res += a2[i - 1][j];
    printf("\nsum of elements of that row:%d", res);
}
void sum_column(int col1, int r3, int c3, int a3[r3][c3])
{
    int res = 0;
    j = col1;
    for (i = 0; i < r3; i++)
        res += a3[i][j - 1];
    printf("\n sum of elements of that  column:%d", res);
}

int main(void)
{
    int r, c, row, col;
    printf("\nenter the number of rows:");
    scanf("%d", &r);
    printf("\nenter the number of columns:");
    scanf("%d", &c);
    int a[r][c];
    printf("\n enter the elements :");
    accept(r, c, a);
    printf("\nthe matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nenter the row for which you want sum of elements:");
    scanf("%d", &row);
    sum_row(row, r, c, a);
    printf("\nenter the column for which you want sum of elements:");
    scanf("%d", &col);
    sum_column(col, r, c, a);
    return 0;
}