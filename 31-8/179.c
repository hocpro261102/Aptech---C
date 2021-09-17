#include <stdio.h>

void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nNhap so nguyen thu %d:",i+1);
        scanf("%d",&a[i]);
    }
}

int max(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            max=a[i];
        }
    return max;
    
}

int min(int a[],int n)
{
    int min=a[1];
    for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            min=a[i];
        }
    return min;
}

int tong(int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        {
            
            s=s+a[i];
        }
    return s;
}

void bbsort(int a[],int n)
{
   int i,j,temp;
   for(i=0;i<n;i++)
    for(j=n-1;j>i;j--)
    {
        if(a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
            
    }
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
}

void issort(int a[],int n)
{
    int vt,i,x;
    for(i=0;i<n;i++)
    {
        x=a[i];
        vt=i-1;
        while((vt>=0) && (a[vt]>x))
        {
            a[vt+1]=a[vt];
            vt--;
        }
        a[vt+1]=x;
    }
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
}
int main()
{
    int n,b,y,z;
    int a[100];
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
    printf("\n---MENU---");
    printf("\n1.Nhap Mang");
    printf("\n2.Tim min max");
    printf("\n3.Tinh tong");
    printf("\n4.Sap xep");
    printf("\n4.1.Bublesort");
    printf("\n4.2.InsertionSort");
    int flag=0;
    while(flag==0)
    {
        printf("\nban chon gia tri:");
        scanf("%d",&b);
        switch (b)
        {
            case 1:
            nhapmang(a,n);
            break;
            
            case 2:
            printf("\nGia tri max la:%d" ,max(a,n));
            printf("\nGia tri min la:%d" ,min(a,n));
            break;
            
            case 3:
            printf("Tong=%d \n",tong(a,n));
            break;
            
            case 4:
            printf("ban chon gia tri:");
            scanf("%d",&z);
            switch (z)
            {
                case 1:
                bbsort(a,n);
                break;
                
                case 2:
                issort(a,n);
                break;
                
            }
            
        }
        printf("\n1 la co, 2 la khong \n");    
        printf("\nBan co muon tiep tuc :");
        scanf("%d",&y);
        if(y==1)
        flag=0;
        else
        flag=1;
        
   }
    
    
    return 0;
}