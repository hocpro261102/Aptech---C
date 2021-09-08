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
int tong(int a[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        {
            
            s=s+a[i];
        }
    return s;
}

void sapxep(int a[],int n)
{
    int i,j,temp;
     for(i=0;i<n;i++)
                        for(j=i+1;j<n;j++)
                            if(a[i]>a[j])
                                {
                                    temp=a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
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

void  timkiem(int a[], int n)
    {
        int i,x,sl=0;
        printf("nhap x:");
        scanf("%d",&x);
      for(i=0;i<n;i++)
      {
                if(a[i]== x)
            {
                    printf("Da tim thay o vi tri %d \n",i+1);
                    sl++;
            }
      }
      if(sl==0)
      printf("Khong tim thay \n");
}

void timmax(int a[],int n,int y)
{
    for(int i=0;i<n;i++)
        if(a[i]==y)
            printf("%d",i+1);
}
   
    
    

int main()
{
    int a[100];
    int n,x,y;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    printf("tong=%d \n",tong(a,n));
    sapxep(a,n);
    xuatmang(a,n);
    printf("max=%d \n",max(a,n));
    timkiem(a,n);
    y=max(a,n);
    printf("max xuat hien o vi tri:");
    timmax(a,n,y);
    
    
    
    

    return 0;
}