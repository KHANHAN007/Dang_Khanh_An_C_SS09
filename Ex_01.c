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
    printf("Nhap vao gia tri va vi tri muon nhap.");
    scanf("%d%d", &num, &idx);

    if (idx >= currentLeight)
    {
        a[idx - 1] = num;
        currentLeight = idx;
    }
    else
    {
        for (int i = currentLeight; i >= idx; --i)
        {
            a[i] = a[i - 1];
        }
        a[idx - 1] = num;
        ++currentLeight;
    }
    xuat(a, currentLeight);
}
