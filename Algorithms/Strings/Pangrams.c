//Pangrams
//https://www.hackerrank.com/challenges/pangrams
//
//Create by hander

#include<stdio.h>
#include<string.h>

int main()
{
	char str[1001];
	int alph = 0, result = 0, i;
	gets(str);
	for (i = 0; i < strlen(str); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			alph |= 1 << (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			alph |= 1 << (str[i] - 'A');
	for (i = 0; i < 26; i++)
		if (((alph & (1 << i)) >> i) == 1)
            result++;
    if (result == 26)
    	printf("pangram\n");
    else
    	printf("not pangram\n");
    return 0;
}
