#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);
    printf("%d %d\n", n+m, n-m);

    float x,y;
    scanf("%f %f", &x, &y);
    printf("%.1f %.1f", x+y, x-y);
    return 0;
}
