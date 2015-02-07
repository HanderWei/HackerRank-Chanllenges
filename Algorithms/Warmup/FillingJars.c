//Filling Jars
//https://www.hackerrank.com/challenges/filling-jars
//
//Craete By Hander

#include<stdio.h>

int main()
{
    long long int N , M , a , b , k , sum = 0;
    scanf("%lld %lld",&N , &M );
    while (M--) {
        scanf("%lld %lld %lld",&a ,&b ,&k);
        sum += (b - a + 1) * k;
    }
    printf("%lld",sum / N );
    return 0;
}