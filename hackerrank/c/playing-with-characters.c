#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("%[^/0]%*c", &sen);
    printf("%c\n%s%s", ch,s,sen);
    return 0;
}