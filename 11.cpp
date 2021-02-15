#include<cstdio>

int main()
{
	int N, i, tmp, cnt = 0;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		tmp = i;
		while (tmp != 0)
		{
			tmp /= 10;
			cnt++;
		}
	}
	printf("%d", cnt);
}