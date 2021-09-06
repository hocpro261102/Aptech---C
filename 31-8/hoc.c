#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int hang,cot;
    int i,j;
    printf("Nhap so hang :");
    scanf("%d",&hang);
    printf("Nhap so cot:");
    scanf("%d",&cot);
    for(i=0;i<hang;i++)
        for(j=0;j<cot;j++)
            {
                printf("A[%d,%d] , B[%d,%d] :",i,j,i,j);
                scanf("%d %d",&A[i][j],&B[i][j]);
                C[i][j] = A[i][j] + B[i][j];
             }
    for(i=0;i<hang;i++)
        for(j=0;j<cot;j++)
            {
                printf("A[%d,%d]=%d,B[%d,%d]=%d,C[%d,%d]=%d\n",i,j,A[i][j],
                i,j,B[i][j],i,j,C[i][j]);
            }

    return 0;
}