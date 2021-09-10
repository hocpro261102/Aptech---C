#include <stdio.h>

int main()
{
    int a[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d",&n);
    for(int i = 0;i < n; i++)
    {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i = 0;i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    int vitri, so;
    printf("\nNhap so can them: ");
    scanf("%d",&so);
    printf("\nNhap vi tri muon chen: ");
    scanf("%d",&vitri);
    for(int i = n ; i >vitri; i--)
    {
        a[i] = a[i-1];
    }
    
    a[vitri] = so;
    n++;
    printf("\nMang sau khi them: ");
    for(int i = 0;i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &vitri);
    for(int i = vitri; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    
    --n;
    printf("\nMang sau khi xoa: ");
    for(int i = 0;i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}