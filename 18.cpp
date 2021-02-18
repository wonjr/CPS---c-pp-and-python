#include<iostream>
using namespace std;

int main()
{
	int n, s, r = -100000, t, i, cnt = 0;

	cin >> n >> s;

	for (i = 1; i <= n; i++)
	{
		cin >> t;
		if (t > s)
			cnt++;
		else
			cnt = 0;
		if (r < cnt)
			r = cnt;
	}
	if (r == 0)
		cout << "-1";
	else
		cout << r;
	return 0;
}