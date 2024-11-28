#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int a[10] = {3, 2, 45, 1, 10, 2, 54, 2, 6, 8};
    int num, idx;
    printf("Nhap vao gia tri va vi tri can sua:");
    scanf("%d%d", &num, &idx);
    a[idx - 1] = num;
    xuat(a, 10);
}