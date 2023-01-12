#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, j, k, m;
    scanf("%d", &n);
      for(i=0;i<(2*n-1);i++)
    {
        m=i;
        if(i>=n)
        {
            m=(2*n-2)-i;
        }
        for (j=0;j<m;j++)
        {
            printf("%d ", n-j);
        }
        for(j=m;j<(2*n-m-1);j++)
        {
            printf("%d ", n-m);
        }
        for (j=(2*n-m-1);j<(2*n-1);j++)
        {
            k=2*n-j;
            k=k-2;
            printf("%d ", n-k);
        }
        printf("\n");
    }
    return 0;
}