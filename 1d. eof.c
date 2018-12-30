#include <stdio.h>

/* copy input to putput; 1st version */
int main()
{
    int c;

    while (c = getchar() != '~') {
        //putchar(c);
        printf("%d\n", c);
    }
    printf("%d\n", c);    
    return 0;
}