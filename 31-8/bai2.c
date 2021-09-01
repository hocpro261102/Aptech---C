#include <stdio.h>

int main()
{
    int n,y;
    do
    {
    printf("Nhap vao so nguyen n lon hon 0: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n So n phai lon hon 0 vui long nhap lai :");
    }
  }while(n <= 0);
  printf("cac uoc so le cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
       if(i % 2 == 1)
       printf("%d ", i);
      
    }
    
  }
  printf("\n cac uoc so chan cua %d la:",n);
  for(int y = 1; y <= n; y++)
  {
    if(n % y == 0)
    {
       if(y % 2 == 0)
       printf("%d ", y);
      
    }
    
  }
    

    return 0;
}
