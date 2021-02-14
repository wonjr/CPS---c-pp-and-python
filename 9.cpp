#include<iostream>

using namespace std;
/*
//1
int main()
{
	int N, i, j;
	int cnt[50001] = { 0 };
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		for (j = i; j <= N; j += i)
		{
			cnt[j]++;
		}
	}
	for (i = 1; i <= N; i++)
	{
		printf("%d ", cnt[i]);
	}
	return 0;
}
*/
/*
//2
int main()
{
	int N, i, j, cnt;

	cin >> N;

	for (i = 1; i <= N; i++)
	{
		cnt = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
	}
}
*/
