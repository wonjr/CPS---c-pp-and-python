#include<iostream>
using namespace std;

int main()
{
	int N, M, hap = 0, i;
	cin >> N >> M;
	for (i = 1; i <= N; i++)
		if (i % M == 0)
			hap += i;
	cout << hap;
}
