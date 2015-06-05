//Two Strings
//https://www.hackerrank.com/challenges/two-strings
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
	int T, ra, rb, i;
	char a[100001], b[100001];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%s", a);
		scanf("%s", b);
		ra = rb = 0;
		for (i = 0; i < strlen(a); i++)
			ra |= 1 << (a[i] - 'a');
		for (i = 0; i < strlen(b); i++)
			rb |= 1 << (b[i] - 'a');
		if (ra & rb)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
