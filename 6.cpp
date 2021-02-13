#include<cstdio>

int main()
{
	int N, i, cnt = 0, res = 0;
	char a[100];
	scanf("%s", a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			res = 10 * res + (a[i] - 48);
		}
	}
	for (i = 1; i <= res; i++)
	{
		if (res % i == 0)
			cnt += 1;
	}
	printf("%d\n%d", res, cnt);
	return 0;


}