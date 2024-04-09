#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define N 20
    int i;
    double vt[N];
    
    for(i = 0;i<N; i++)
    {
        
        vt[i]=rand()%100;
        printf(" \nvt %d: %f\n", i, vt[i]);
    }

    return 0;
}
