

#include <stdio.h>

int main()
{   
    
    int n,i,x,y,min,h;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    int a[n];
    x=0;
    y=0;
    h=0;
    printf("nhap mang a:\n");
    for(i=1;i<n+1;i++)
    {
        
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            x=x+1;
        else
            y=y+1;
    }
    printf("So phan tu chan: %d \n",x);
    printf("So phan tu le: %d \n",y);
    min=a[1];
    for(i=1;i<n+1;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("gia tri nho nhat la: %d \n",min);
    for(i=1;i<n+1;i++)
    {
        if(a[i]==min)
            h=h+1;
    }
    printf("gia tri nho nhat xuat hien %d lan",h);
    return 0;
}