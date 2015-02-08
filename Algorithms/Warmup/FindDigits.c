//Find Digits
//https://www.hackerrank.com/challenges/find-digits
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T , N ;
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&N);
        int res = 0, rem , div = N ;
        while (div > 0) {
            rem = div % 10;
            if (rem != 0 && N % rem == 0) {
                res++;
            }
            div = div / 10;
        }
        printf("%d\n",res);
    }
    return 0;
}