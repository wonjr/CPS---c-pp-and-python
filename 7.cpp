#include<cstdio>
#include<cstdlib>
int main()
{
	char a[100], b[100];
	int i, p = 0;

	fgets(a,100,stdin);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
				b[p++] = a[i]+32;
			else
				b[p++] = a[i];
		}
	}
	b[p] = '\0';
	printf("%s", b);
}