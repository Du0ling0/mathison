/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

int menor(float a, float b, float c)
{
	float menor;

	if(a < b)
        {
                menor = a;
                if(c < menor)
                {
                        menor = c;
                }
        }
        else
        {
                menor = b;
                if(c < menor)
                {
			menor = c;
                }
        }

	return menor;
}
