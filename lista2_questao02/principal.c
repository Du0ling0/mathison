#include <stdio.h>
#include "biblioteca.h"

int main( float argc, char **argv[])
{
        float a, b, c, d, e;

        scanf("%f", &a);
        scanf("%f", &b);
	scanf("%f", &c);
        scanf("%f", &d);
	scanf("%f", &e);

        printf("%f\n", soma(a,b,c,d,e));
	printf("%f\n", media(a,b,c,d,e));


        return 0;
}
