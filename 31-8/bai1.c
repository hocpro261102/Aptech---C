#include <stdio.h>

int main()
{
    int x,y; 
    x=1;
    y=0;
 
    while (x != 0)
    {
        printf("Nhap vao mot so : ");
        scanf("%d", &x);
        y=y+1;
        if(x%2==0)
            printf("day la so chan \n");
        else
            printf("day la so le \n");
    }
    printf("ban da nhap %d lan ",y-1);

 
    return 0;
}