#include<cstdio>
#include<climits>
int digit_sum(int x)
{
	int hap = 0;
	while (x != 0)
	{
		hap += x % 10;
		x /= 10;
	}
	return hap;
}
int main()
{
	int res, N, max = INT_MIN, sum, i, num;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		sum = digit_sum(num);
		if (max < sum)
		{
			max = sum;
			res = num;
		}
		else if (max == sum)
		{
			if (num > res)
				res = num;
		}
	}
	printf("%d\n", res);
	return 0;
}