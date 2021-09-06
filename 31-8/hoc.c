#include <stdio.h>

int tong(int n)  
    {
        int s,i;
    s=0;
    for(i=0;i<n+1;i++)
    s=s+i;
    return s;
    }
int tinh(int n)
    {
        if(n%2==0)
        return 1;
        else
        
        return -1;
    }
int giaithua(int n)
{

        int s=1;
            if(n == 0)
                return 1;
            int i;
            for(i=1;i<=n;i++)
                s=s*i;

        return s;

}