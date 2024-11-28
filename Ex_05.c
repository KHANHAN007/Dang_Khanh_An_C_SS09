#include <stdio.h>
int currentLeight;

int nt(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
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
void evenSum(int a[])
{
    int sum = 0;
    for (int i = 0; i < currentLeight; ++i)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }
    printf("\n%d\n", sum);
}
void maxMin(int a[])
{
    int max = a[0], min = a[0];
    for (int i = 1; i < currentLeight; ++i)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("Max: %d\nMin: %d\n", max, min);
}
void prime(int a[])
{
    int sum = 0;
    for (int i = 0; i < currentLeight; ++i)
    {
        if (nt(a[i]))
        {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }
    printf("\n%d\n", sum);
}
void check(int a[])
{
    int n, count = 0;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &n);
    for (int i = 0; i < currentLeight; ++i)
    {
        if (a[i] == n)
            count++;
    }
    printf("So lan xuat hien cua %d la: %d\n", n, count);
}
int add(int a[])
{
    int num, idx;
    printf("Nhap vao gia tri va vi tri muon nhap:");
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
int main()
{
    int a[100] = {0};
    int option;
    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
            evenSum(a);
            break;
        case 4:
            maxMin(a);
            break;
        case 5:
            prime(a);
            break;
        case 6:
            check(a);
            break;
        case 7:
            add(a);
            break;
        case 8:
            return 0;

        default:
            printf("Lua chon khong hop le.");
            break;
        }
    }
}