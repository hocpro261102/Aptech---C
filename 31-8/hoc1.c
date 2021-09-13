#include <stdio.h>
#include <string.h>

struct sach
{
    char ma[30];
    char ten[30];
    char tacgia[30];
    char nam[30];
};

int main()
{
    
    int a[100];
    char tim[30];
    int n,i,vitri,xoa,vitritim;
    printf("Nhap so quyen sach:");
    scanf("%d",&n);
    struct sach s[n];
    for(i=0;i<n;i++)
        {
            printf("\nNhap thong tin quyen sach thu %d",i+1);
            printf("\nNhap ma sach:");
            scanf("%s",s[i].ma);
            printf("\nNhap ten sach:");
            scanf("%s",s[i].ten);
            printf("\nNhap tac gia sach:");
            scanf("%s",s[i].tacgia);
            printf("\nNhap nam xuat ban:");
            scanf("%s",s[i].nam);
        }
    for(i=0;i<n;i++)
        {
            printf("\nThong tin quyen sach thu %d:",i+1);
            printf("\nMa sach la:%s",s[i].ma);
            printf("\nTen sach la:%s",s[i].ten);
            printf("\nTac gia sach la:%s",s[i].tacgia);
            printf("\n Nam xuat ban la:%s",s[i].nam);
        }
    //  Sap xep   
    int length=strlen(s[i].ten);
    for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    
                    if(strlen(s[i].ten)<strlen(s[j].ten))
                        {
                        char temp[30];
                        strcpy(temp,s[j].ten);
                        strcpy(s[j].ten,s[i].ten);
                        strcpy(s[i].ten,temp);
                        }
                }
        }
    for(int i=0;i<3;i++)
        {
            printf("\n .%s",s[i].ten);
        }
    // Them
    
    printf("\nNhap vi tri can chen:");
    scanf("%d",&vitri);
    struct sach t;
    printf("\nNhap ma sach:");
    scanf("%s",t.ma);
    printf("\nNhap ten sach:");
    scanf("%s",t.ten);
    printf("\nNhap tac gia sach:");
    scanf("%s",t.tacgia);
    printf("\nNhap nam xuat ban:");
    scanf("%s",t.nam);
    for(i=n;i>vitri;i--)
    {
        s[i]=s[i-1];
    }
    s[vitri]=t;
    n++;
    for(i=0;i<n;i++)
        {
            
            printf("\nThong tin quyen sach thu %d:",i+1);
            printf("\nMa sach la:%s",s[i].ma);
            printf("\nTen sach la:%s",s[i].ten);
            printf("\nTac gia sach la:%s",s[i].tacgia);
            printf("\n Nam xuat ban la:%s",s[i].nam);
        }
    // Xoa
    printf("\nNhap vitri can xoa:");
    scanf("%d",&xoa);
    
    for(i=xoa; i<n-1; i++)
    {
        s[i] = s[i+1];
    }
    n--;
    for(i=0;i<n;i++)
        {
            
            printf("\nThong tin quyen sach thu %d:",i+1);
            printf("\nMa sach la:%s",s[i].ma);
            printf("\nTen sach la:%s",s[i].ten);
            printf("\nTac gia sach la:%s",s[i].tacgia);
            printf("\n Nam xuat ban la:%s",s[i].nam);
        }
        
    // Tim thong tin quyen sach khi biet ma
    printf("nhap thong tin can tim");
    scanf("%s",tim);
    for(i=0;i<n;i++)
        {
            if(strcmp(tim=s[i].ma)=0 || strcmp(tim=s[i].ten)=0 ||strcmp(tim=s[i].tacgia)=0 ||strcmp(tim=s[i].nam)=0)
            {
                vitritim=i;
            }
        }
    printf("\nThong tin sach can tim");
    printf("\nMa sach la:%s",s[vitritim].ma);
    printf("\nTen sach la:%s",s[vitritim].ten);
    printf("\nTac gia sach la:%s",s[vitritim].tacgia);
    printf("\n Nam xuat ban la:%s",s[vitritim].nam);
   
    return 0;
}