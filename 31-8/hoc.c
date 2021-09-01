#include <stdio.h>

int main()
{
    int n,x,i;
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
   printf("nhap x:");
   scanf("%d",&x);
   int flag=0;
   int b=0;
   i=0;
   while(a[i]!=x && i<n)
        i++;
    if(i<n)
        printf("da tim thay o phan tu thu %d",b);
    else
        printf("khong tim thay");

    return 0;
}