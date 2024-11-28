#include <stdio.h>
int row, col;

void nhap(int a[][100])
{
    printf("Nhap so dong va so cot cua ma tran: ");
    scanf("%d%d", &row, &col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("Nhap vao phan tu a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuat(int a[][100])
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void oddSum(int a[][100])
{
    int sum = 0;
    printf("Cac phan tu le: ");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("%d ", a[i][j]);
                sum += a[i][j];
            }
        }
    }
    printf("\nTong cac phan tu le: %d\n", sum);
}
void bienProduct(int a[][100])
{
    int product = 1;
    printf("Cac phan tu tren duong bien: ");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                printf("%d ", a[i][j]);
                product *= a[i][j];
            }
        }
    }
    printf("\nTich cac phan tu tren duong bien: %d\n", product);
}
void duongCheoChinh(int a[][100])
{
    for (int i = 0; i < row; ++i)
    {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}
void duongCheoPhu(int a[][100])
{
    for (int i = 0; i < row; ++i)
    {
        printf("%d ", a[i][col - 1 - i]);
    }
    printf("\n");
}
void rowMax(int a[][100])
{
    int maxSum = -1000000, maxRow = 0;
    for (int i = 0; i < row; ++i)
    {
        int sum = 0;
        for (int j = 0; j < col; ++j)
        {
            sum += a[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    printf("Dong co tong max %d\nSum: %d\n", maxRow + 1, maxSum);
}
int main()
{
    int a[100][100];
    int option;

    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap kich thuoc va gia tri cac phan tu cua ma tran\n");
        printf("2. In gia tri cac phan tu cua ma tran\n");
        printf("3. In ra cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            nhap(a);
            break;
        case 2:
            xuat(a);
            break;
        case 3:
            oddSum(a);
            break;
        case 4:
            bienProduct(a);
            break;
        case 5:
            duongCheoChinh(a);
            break;
        case 6:
            duongCheoPhu(a);
            break;
        case 7:
            rowMax(a);
            break;
        case 8:
            return 0;
        default:
            printf("Lua chon khong hop le.\n");
        }
    }
}
