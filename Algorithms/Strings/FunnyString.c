//Funny String
//https://www.hackerrank.com/challenges/funny-string
//
//Create By Hander

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int T, len, flag;
    char str[10001];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", str);
        len = strlen(str);
        flag = 1;
        for (int i = 0; i < len / 2; i++)
            if (abs(str[i] - str[i + 1]) != abs(str[len - i - 1] - str[len - i - 2]))
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            printf("Funny\n");
        }
        else
        {
            printf("Not Funny\n");
        }  
    } 
    return 0;
}
