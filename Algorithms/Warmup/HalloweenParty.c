//Halloween Party
//https://www.hackerrank.com/challenges/halloween-party
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T , K ;
    scanf("%d", &T);
    while (T--) {
        scanf("%d",&K);
        long long int res = 0 ,j = 0;
        for (int i = 0 ; i < K ; i++) {
            if (i % 2 != 0) {
                j++;
            }
            res += j;
        }
        printf("%lld\n",res);
    }
    return 0;
}