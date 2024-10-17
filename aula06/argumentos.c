#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1 = 12, n2 = 25;
    printf("n1 & n2 =%d\n", n1 & n2);
    n1 &= n2;
    printf("n1 = %d", n1);
    return 0;
}