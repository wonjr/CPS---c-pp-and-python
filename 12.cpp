#include<cstdio>

int main()
{
	int N, sum = 0, d = 9, c = 1, res = 0;
	scanf("%d", &N);
	while (sum + d < N) {
		res = res + (c * d);
		sum += d;
		c++;
		d *= 10;
	}
	res += (N - sum) * c;
	printf("%d", res);
	return 0;
}