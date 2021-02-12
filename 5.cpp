#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	char jm[20];
	int year, age;
	scanf("%s", jm);
	if (jm[7] == '1' || jm[7] == '2')
		year = 1900 + ((jm[0] - 48) * 10 + (jm[1] - 48));
	else
		year = 2000 + ((jm[0] - 48) * 10 + (jm[1] - 48));
	age = 2021 - year + 1;
	printf("%d", age);
	if (jm[7] == '1' || jm[7] == '3')
		printf("M");
	else
		printf("W");
	

}