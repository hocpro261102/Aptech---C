#include <stdio.h>

int main()
{
    int n,j,i,temp,b,x,y;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&n);
    int a[n];
    for( i = 0; i<n ; i++)
    {
        printf("nhap phan thu %d:",i);
        scanf("%d",&a[i]);
    }
     printf("\n");
   for( i = 0; i<n ; i++)
   {
      printf("%d\t",a[i]);
   }
   
   
   int flag=0;
   while(flag==0)
   {
        printf("ban chon gia tri:");
        scanf("%d",&b);
            switch (b)
            {
                case 1:printf("nhap x:");
                 scanf("%d",&x);
                 i=0;
                while(a[i]!=x && i<n)
                    i++;
                if(i<n)
                    printf("da tim thay o phan tu thu %d \n",i);
                else
                    printf("khong tim thay \n");
                break;
            case 2:
            printf("\n");
                  for(i=0;i<n;i++)
                        for(j=i+1;j<n;j++)
                            if(a[i]>a[j])
                                {
                                    temp=a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
                                }
                     for( i = 0; i<n ; i++)
                  {
                      printf("%d\t",a[i]);
                  }
                  break;
            case 3:
            printf("\n");
                  for(i=0;i<n;i++)
                        for(j=i+1;j<n;j++)
                            if(a[i]<a[j])
                                {
                                    temp=a[i];
                                    a[i]=a[j];
                                    a[j]=temp;
                                }
                     for( i = 0; i<n ; i++)
                  {
                      printf("%d\t",a[i]);
                  }
                  break;
            }
        printf("1 la co, 2 la khong \n");    
        printf("Ban co muon tiep tuc chon gia tri:");
        scanf("%d",&y);
        if(y==1)
        flag=0;
        else
        flag=1;
        
   }
        
   
   
    return 0;
}