//Make it Anagram
//https://www.hackerrank.com/challenges/make-it-anagram
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
	int result1[26], result2[26], sum = 0, i;
	for (i = 0; i < 26; i++)
		result1[i] = result2[i] = 0;
	char str1[10001], str2[10001];
	scanf("%s", str1);
	scanf("%s", str2);
	for (i = 0; i < strlen(str1); i++)
        result1[str1[i] - 'a']++;
    for (i = 0; i < strlen(str2); i++)
        result2[str2[i] - 'a']++;
    for (i = 0; i < 26; i++)
        sum += abs(result1[i] - result2[i]);
    printf("%d\n", sum);
    return 0;
}
