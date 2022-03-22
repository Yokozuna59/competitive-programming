#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum =0;
    for (int i=10, j = 0;j<5;i*=10,j++){
        int x = n%i;
        sum+=x/(i/10);
    }
    printf("%d", sum);
    return 0;
}
