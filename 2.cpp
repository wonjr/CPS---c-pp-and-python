#include<iostream>
using namespace std;

int main()
{
	int A, B, hap, i;
	cin >> A >> B;
	hap = A;
	cout << A;
	for (i = A + 1; i <= B; i++)
	{
		cout << " + " << i;
		hap += i;
	}
	cout << " = " << hap;
	return 0;
}

