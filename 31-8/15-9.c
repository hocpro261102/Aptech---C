#include <stdio.h>
#include<malloc.h>
#include <string.h>
 typedef struct
 {
     char ma[5];
     char ten[30];
     int toan,van,dtb;
 } hocsinh;
 
 void nhap(hocsinh hs[],int n)
 {
     for(int i=0;i<n;i++)
        {
            printf("\nNhap thong tin hoc sinh thu %d",i+1);
            printf("\nNhap ma hoc sinh:");
            scanf("%s",hs[i].ma);
            printf("\nNhap ten hoc sinh:");
            scanf("%s",hs[i].ten);
            printf("\nNhap diem toan:");
            scanf("%d",&hs[i].toan);
            printf("\nNhap diem van:");
            scanf("%d",&hs[i].van);
            
        }
 }
 
void xuat(hocsinh hs[],int n)
{
    for(int i=0;i<n;i++)
        {   
            hs[i].dtb=(hs[i].toan+hs[i].van)/2;
            printf("\n");
            printf("\nThong tin hoc sinh thu %d:",i+1);
            printf("\nMa hoc sinh la:%s",hs[i].ma);
            printf("\nTen hoc sinh la:%s",hs[i].ten);
            printf("\nDiem toan la:%d",hs[i].toan);
            printf("\nDiem van la:%d",hs[i].van);
            printf("\nDiem trung binh la:%d",hs[i].dtb);
        }
}

void timhocsinh(hocsinh hs[],int n,char tim[30],int vitritim)
{
    printf("\nNhap ten can tim:");
    scanf("%s",tim);
    for(int i=0;i<n;i++)
        {
            if(strcmp(tim,hs[i].ten)==0)
            vitritim=i;
        }
    printf("\nThong tin hoc sinh can tim");
    printf("\nMa hoc sinh la:%s",hs[vitritim].ma);
    printf("\nTen hoc sinh la:%s",hs[vitritim].ten);
    printf("\nDiem toan la:%d",hs[vitritim].toan);
    printf("\nDiem van la:%d",hs[vitritim].van);
    printf("\nDiem trung binh la:%d",hs[vitritim].dtb);
}
void themhocsinh(hocsinh hs[],hocsinh t,int*n,int them)
{
    printf("\nNhap vi tri can them:");
    scanf("%d",&them);
    printf("\nNhap ma hoc sinh can them:");
    scanf("%s",t.ma);
    printf("\nNhap ten hoc sinh can them:");
    scanf("%s",t.ten);
    printf("\nNhap diem toan:");
    scanf("%d",&t.toan);
    printf("\nNhap diem van:");
    scanf("%d",&t.van);
    for(int i=(*n);i>them;i--)
    {
        hs[i]=hs[i-1];
    }
    hs[them]=t;
    (*n)++;
    
}
void xoahocsinh(hocsinh hs[],int n);
{
    printf("Nhap vi tri can xoa:");
    scanf("%d",&xoa);
    for(int i=xoa; i<n-1; i++)
    {
        s[i] = s[i+1];
    }
    n--;
}

void lietke(hocsinh hs[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(hs[i].dtb<5)
        printf(" \n %d %s",i+1,hs[i].ten);
    }
}

void demhocsinh(hocsinh hs[],int n,int dem)
{
    for(int i=0;i<n;i++)
    {
        if(hs[i].toan>8 && hs[i].van>8)
            {
                dem++;
            }
    }
    printf("\n So hoc sinh co diem toan va van lon hon 8 la: %d",dem);
}

void sapxep(hocsinh hs[],int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(hs[i].dtb<hs[j].dtb)
                {
                    char temp[30];
                    strcpy(temp,hs[j].ten);
                    strcpy(hs[j].ten,hs[i].ten);
                    strcpy(hs[i].ten,temp);
                }
            }
        }
}
 
 
int main()
{
    int n,x,y,z,vitritim,them,xoa,dem;
    char tim[30];
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);
    hocsinh hs[n];
    hocsinh t;
    nhap(hs,n);
    xuat(hs,n);
    printf("\n1.Them,xoa va tim");
    printf("\n2.Liet ke hoc sinh co diem <5");
    printf("\n3.Dem so hoc sinh co diem toan va van>8");
    printf("\n4.Sap xep hoc sinh giam dan theo diem trung binh");
     
   int flag=0;
   while(flag==0)
   {
        printf("\nban chon gia tri:");
        scanf("%d",&x);
            switch (x)
            {
                case 1:
                printf("\n1.Tim");
                printf("\n2.Them");
                printf("\n3.Xoa");
                printf("\nBan chon gia tri:");
                scanf("%d",&z);
                switch(z)
                {
                    case 1:
                    timhocsinh(hs,n,tim,vitritim);break;
                    case 2:
                    themhocsinh(hs,t,&n,them);
                    xuat(hs,n);
                    break;
                    case 3:
                    xoahocsinh(hs,n);
                    xuat(hs,n);
                    break;
                }
                break;
                
                case 2:
                    lietke(hs,n);
                    break;
                
                case 3:
                    demhocsinh(hs,n,dem);
                    break;
                    
                case 4:
                    sapxep(hs,n);
                    xuat(hs,n);
                    break;
                
                    
            }
        printf("\n1 la co, 2 la khong ");    
        printf("\nBan co muon tiep tuc chon gia tri:");
        scanf("%d",&y);
        if(y==1)
        flag=0;
        else
        flag=1;        
            
        
    }
    
    return 0;

}