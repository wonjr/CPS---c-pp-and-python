#include<iostream>
#include<Climits>
#include<algorithm>
using namespace std;
/*
//1
int main()
{
	int N, mnum = INT_MIN, nnum = INT_MAX, i, a;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> a;
		if(a > mnum)
			mnum = a;
		if (a < nnum)
			nnum = a;
	}
	cout << mnum - nnum;
	return 0;
}
*/
/*
//2
int main()
{
	int N, mnum = INT_MIN, nnum = INT_MAX, i, a[100];
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	sort(a, a + N);
	cout << a[N-1] - a[0];
}
*/