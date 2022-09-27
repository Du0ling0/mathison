int maior(int a, int b, int c)
{
	int maior;
	
	if (a>b && b>c)
	{
		maior= a;
	}
	else if (a>c && c>b)
	{
		maior= a;
	}
	else if (b>a && a>c)
	{
		maior= b;
	}
	else if (b>c && c>a)
	{
		maior= b;

	}
	else if (c>a && a>b)
	{
		maior= c;
	}
	else
	{
		maior= c;
	}

	return maior;
}

int menor(int a, int b, int c)
{
        int menor;

        if (a>b && b>c)
        {
                menor= c;
        }
        else if (a>c && c>b)
        {
                menor=b;
        }
        else if (b>a && a>c)
        {
                menor=c;
        }
        else if (b>c && c>a)
        {
                menor=a;

        }
        else if (c>a && a>b)
        {
                menor= b;
        }
        else
        {
                menor=a;
        }

        return menor;
}

int meio(int a, int b, int c)
{
        int meio;

        if (a>b && b>c)
        {
                meio= b;
        }
        else if (a>c && c>b)
        {
                meio= c;
        }
        else if (b>a && a>c)
        {
                meio= a;
        }
        else if (b>c && c>a)
        {
                meio= c;

        }
        else if (c>a && a>b)
        {
                meio= a;
        }
        else
        {
                meio= b;
        }

        return meio;
}
