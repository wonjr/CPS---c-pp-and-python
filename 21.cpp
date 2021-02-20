#include<iostream>

using namespace std;

int main() 
{
	int a[10], b[10];
	int lw, asc = 0, bsc = 0, i;

	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < 10; i++)
	{
		cin >> b[i];
	}

	for (i = 0; i < 10; i++)
	{
		if (a[i] > b[i])
		{
			asc += 3;
			lw = 1;
		}
		else if (b[i] > a[i])
		{
			bsc += 3;
			lw = 2;
		}
		else
		{
			asc += 1;
			bsc += 1;
		}
	}
	cout << asc << ' ' << bsc << endl;
	if (asc == bsc)
	{
		if (lw == 1)
			cout << "A";
		else if (lw == 2)
			cout << "B";
		else
			cout << "D";
	}
	else if (asc > bsc)
		cout << "A";
	else
		cout << "B";
}