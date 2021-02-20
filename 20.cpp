#include<iostream>
using namespace std;

int main()
{
	int N, i;
	int a[100], b[100];

	cin >> N;

	for (i = 0; i < N; i++)
		cin >> a[i];
	for (i = 0; i < N; i++)
		cin >> b[i];

	for (i = 0; i < N; i++)
	{
		if (a[i] == b[i])
			cout << "D" << endl;
		else if (a[i] % 3 + 1 == b[i])
			cout << "B" << endl;
		else
			cout << "A" << endl;
	}
	return 0;

}