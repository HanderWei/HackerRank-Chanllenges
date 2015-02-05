//Alternating Characters
//https://www.hackerrank.com/challenges/alternating-characters
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
    int n ;
    char a , str[100000];
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++) {
        scanf("%s",str);
        int res = 0;
        a = str[0];
        for (int j = 1 ; j < strlen(str); j++) {
            if (a == str[j])
                res++;
            a = str[j];
        }
        printf("%d\n",res);
    }
    return 0;
}