//Anagram
//https://www.hackerrank.com/challenges/anagram
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
	int T, result1[26], result2[26], i, len, sum;
	char str[10001];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", str);
		if((len = strlen(str)) % 2){
			printf("-1\n");
			continue;
		}	
		for(i = 0; i < 26; i++)
			result1[i] = result2[i] = 0;
		len = len / 2;
		for(i = 0; i < len; i++){
			result1[str[i] - 'a']++;
			result2[str[i + len] - 'a']++;
		}
		sum = 0;
		for(i = 0; i < 26; i++)
			sum += abs(result1[i] - result2[i]);
		printf("%d\n", sum / 2);
	}
	return 0;
}
