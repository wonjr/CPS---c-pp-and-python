#include<cstdio>

int main()
{
	int N, i, cnt = 0, m;
	int a[100];

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
		scanf("%d", &a[i]);
	m = a[N];
	for (i = N; i >= 1; i--)
	{
		if (m < a[i])
		{
			cnt++;
			m = a[i];
		}
	}
	printf("%d", cnt);
	return 0;
}