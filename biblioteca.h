/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include <stdio.h>

int maior(int a, int b, int c)
{
	int maior;

	if(a > b)
	{
		maior = a;
		if(c > maior)
		{
			maior = c;
		}
	}
	else
	{
		maior = b;
		if(c > maior)
		{
			maior = c;
		}
	}

	return maior;
}
