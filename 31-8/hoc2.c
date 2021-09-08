#include <stdio.h>
void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            printf("nhap phan tu thu %d:",i+1);
            scanf("%d",&a[i]);
        }
}

void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            
            printf("%d \t",a[i]);
        }
}
void daonguoc(int a[],int n)
{
     
   for(int i=0; i< n/2; i++)
    {
        int x = n - i - 1;
        int y = a[x];
        a[x] = a[i];
        a[i] = y;
    }

}




int main()
{
    int a[100],b[100];
    int n;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    daonguoc(a,n);
    printf("\n");
    xuatmang(a,n);
    

    return 0;
}