#include <stdio.h>
#include "biblioteca.h"

int main( int argc, char **argv[])
{
        int a, b, c;

        scanf("%d", &a);
        scanf("%d", &b);
	scanf("%d", &c);

        printf("%d\n", maior(a,b,c));
	printf("%d\n", menor(a,b,c));


        return 0;
}
