#include<cstdio>

int main()
{
	char a[100];
	char num[10] = { 0 };
	int i, max = -1, res;
	scanf("%s", a);

	for (i = 0; a[i] != '\0'; i++)
	{
		num[a[i] - 48]++;
	}
	for (i = 0; i <= 9; i++)
	{
		if (max <= num[i])
		{
			max = num[i];
			res = i;
		}
	}
	printf("%d", res);
	return 0;



}