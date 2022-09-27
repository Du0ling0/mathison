#include <stdio.h>
#include "biblioteca.h"

int main( int argc, char **argv[])
{
        int a, b;

        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d\n", maior(a,b));

        return 0;
}
