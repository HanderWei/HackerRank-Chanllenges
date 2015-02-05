//The Love-Letter Mystery
//https://www.hackerrank.com/challenges/the-love-letter-mystery
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
    int  n;
    char str[10000];
    scanf("%d",&n);
    for (int i = 0 ; i < n; i++) {
        int res = 0;
        scanf("%s",str);
        int length = strlen(str);
        for (int j = 0 ; j < length / 2; j++)
            if (str[j] != str[length - 1 - j])
                res += (str[j] > str[length - 1 - j] ? str[j] - str[length - 1 - j] : str[length - 1 - j] - str[j]);
        printf("%d\n",res);
    }
    return 0;
}