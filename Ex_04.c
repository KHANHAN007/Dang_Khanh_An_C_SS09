#include <stdio.h>
int currentLeight;

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}
int nhap(int a[])
{
    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &currentLeight);
    for (int i = 0; i < currentLeight; ++i)
    {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", a + i);
    }
}
int delete(int a[])
{
    int idx;
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
}
int add(int a[])
{
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
}
int replace(int a[])
{
    int num, idx;
    printf("Nhap vao gia tri va vi tri can sua:");
    scanf("%d%d", &num, &idx);
    a[idx - 1] = num;
}
int main()
{
    int a[101] = {0};
    int option;
    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu vao mang\n");
        printf("4. Sua phan tu mang\n");
        printf("5. Xoa phan tu mang\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            nhap(a);
            break;
        case 2:
            xuat(a, currentLeight);
            break;
        case 3:
            add(a);
            break;
        case 4:
            replace(a);
            break;
        case 5:
            delete (a);
            break;
        case 6:
            return 0;

        default:
            printf("Lua chon khong hop le.");
            break;
        }
    }
}