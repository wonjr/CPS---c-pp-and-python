#include<iostream>
using namespace std;

int main()
{
	int N, hap = 1, i;
	cin >> N;
	cout << "1";
	for (i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			hap += i;
			cout << " + " << i;
		}
	}
	cout << " = " << hap;
	return 0;
}