#include<iostream>

using namespace std;

int main()
{
	int N, i, cnt = 0, j, flag;

	cin >> N;
	for (i = 2; i <= N; i++)
	{
		flag = 1;
		for (j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cnt++;
	}
	
	cout << cnt;

}