#include<cstdio>
int reverse(int x)
{
	int tmp = 0;
	while (x != 0)
	{
		tmp = 10 * tmp + x % 10;
		x /= 10;
	}
	return tmp;
}

bool isPrime(int x)
{
	int i;
	if (x == 1)
		return false;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int N, i, num, tmp;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp))
		{
			printf("%d ", tmp);
		}
	}
}