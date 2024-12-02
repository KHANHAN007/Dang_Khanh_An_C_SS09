#include <stdio.h>

void xuat(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int tmp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = tmp;
    }
}

void bubleSort(int a[], int n)
{
    for (int i = n - 1; i > 0; --i)
    {
        int is_swap = 1;
        for (int j = 0; j < i; ++j)
        {
            int tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            is_swap = 0;
        }
        if (is_swap == 1)
            break;
    }
}

// i
// 15 2 3 1 0 8
//   i
// 0 2 3 1 15 8
//     i
// 0 1 3 2 15 8
//       i
// 0 1 2 3 15 8
//         i
// 0 1 2 3 8 15
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int idx_min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[idx_min])
                idx_min = j;
        }
        if (idx_min != i)
        {
            int tmp = a[i];
            a[i] = a[idx_min];
            a[idx_min] = tmp;
        }
    }
}

// i
// 0 15 3 2 1 8
//            j
//   i
// 0 1 15 3 2 8
//            j
//     i
// 0 1 2 15 3 8
//            j
//       i
// 0 1 2 3 15 8
//            j
//         i
// 0 1 2 3 8 15
//            j
void interchangeSort(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}

int main()
{
    int n = 6;
    int a[6] = {15, 2, 3, 1, 0, 8};
    printf("Mang trc khi sx: ");
    xuat(a, n);

    insertionSort(a, n);
    // bubleSort(a,n);
    // selectionSort(a,n);
    // interchangeSort(a,n);
    printf("Mang sau khi sx: ");
    xuat(a, n);
}
