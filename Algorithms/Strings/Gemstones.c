//Gem Stones
//https://www.hackerrank.com/challenges/gem-stones
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
    int N, result = -1, sum = 0;
    char str[101];
    scanf("%d", &N);
    int rocks[N];
    for (int i = 0; i < N; i++)
    {
        rocks[i] = 0;
        scanf ("%s", str);
        for (int j = 0; j < strlen(str); j++)
            rocks[i] |= 1 << (str[j] - 'a');
    }
    for (int i = 0; i < N; i++)
        result &= rocks[i];
    for (int i = 0; i < 26; i++)
        if (((result & (1 << i)) >> i) == 1)
            sum++;
    printf("%d\n", sum);
    return 0;
}
