#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int b=pow(10, 4);
    int a[b];
    int t, n, i, result[100];
    //printf("t? ");
    scanf("%d", &t);
    int T=t;
    while(t!=0)
    {
        //printf("starting %d\nn? ", t);
        scanf("%d", &n);
        //int a[n];
        int d;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        //scanf("%d\n", &a[n-1]);
        d=abs(a[0]-a[1]);
        //printf("d0- %d\n", d);
        for (i=1;i<n-1;i++)
        {
            if(d>abs(a[i]-a[i+1]))
            {
                d=abs(a[i]-a[i+1]);
            }
            //printf("d%d- %d\n", i, d);
        }
        result[T-t]=d;
        //printf("rere %d\n", result[T-t]);
        t-=1;
        //printf("t now- %d\n", t);
    }
    for(i=0;i<T;i++)
    {
        printf("%d \n", result[i]);
    }
    return 0;
}
