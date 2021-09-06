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

int tim(a[],int n,int x)
{
    int c;
    for(int i=0;i<n;i++)
        {
            if(x=a[i])
                c=0;
            else
                c=1;
            
            
        }
    return c;
}
   
    
    

int main()
{
    int a[100];
    int n,x,c;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    nhapmang(a,n);
    xuatmang(a,n);
    printf("tong=%d \n",tong(a,n));
    sapxep(a,n);
    xuatmang(a,n);
    printf("max=%d \n",max(a,n));
    printf("nhap gia tri cua x:");
    scanf("%d",&x);
    if(c=0)
        printf("da tim thay");
    else
        printf("x khong co trong mang");
    
    
    
    

    return 0;
}