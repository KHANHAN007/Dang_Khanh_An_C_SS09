#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int a[101] = {0}, currentLeight;
    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &currentLeight);
    for (int i = 0; i < currentLeight; ++i)
    {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", a + i);
    }

    int num, idx;
    printf("Nhap vao vi tri muon xoa.");
    scanf("%d", &idx);

    if (idx < 1 || idx > currentLeight - 1)
    {
        printf("Vi tri khong hop le.");
        return 1;
    }
    for (int i = idx - 1; i < currentLeight - 1; ++i)
    {
        a[i] = a[i + 1];
    }
    --currentLeight;
    xuat(a, currentLeight);
}
