#include<cstdio>

int main()
{
	int cnt = 0, i, flag = 0;
	char a[100];

	scanf("%s", &a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(')
			cnt++;
		else if (a[i] == ')')
			cnt--;
		if (cnt < 0)
			break;
	}
	if (cnt == 0)
		printf("Yes\n");
	else
		printf("No");
	return 0;
}