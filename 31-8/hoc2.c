#include <stdio.h>
#include <string.h>
struct SV
{
    char ten[30];
    int toan,ly,hoa,dtb;
};
int main()
{
    int n,i;
    printf("nhap so hoc sinh:");
    scanf("%d",&n);
    struct SV sv[n];
    for(i=0;i<n;i++)
    {
        printf("Nhap ten hoc sinh thu %d:",i+1);
        scanf("%s",sv[i].ten);
        printf("\nNhap diem toan:");
        scanf("%d",&sv[i].toan);
        printf("\nNhap diem ly:");
        scanf("%d",&sv[i].ly);
        printf("\nNhap diem hoa:");
        scanf("%d",&sv[i].hoa);
        sv[i].dtb=(sv[i].toan+sv[i].ly+sv[i].hoa)/3;
    }
    
    
    for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                {
                    
                    if(sv[i].dtb<sv[j].dtb)
                        {
                        int temp;
                        temp=sv[j].dtb;
                        sv[j].dtb=sv[i].dtb;
                        sv[i].dtb=temp;
                        char tem[30];
                        strcpy(tem,sv[j].ten);
                        strcpy(sv[j].ten,sv[i].ten);
                        strcpy(sv[i].ten,tem);
                        }
                }
        }
    for(i=0;i<3;i++)
    {
        printf("\n %d.Ten hoc sinh: %s",i+1,sv[i].ten);
        printf("\n Diem trung binh la: %d",sv[i].dtb);
        
    }
    
    return 0;
}