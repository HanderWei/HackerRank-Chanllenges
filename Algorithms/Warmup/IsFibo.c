//Is Fibo
//https://www.hackerrank.com/challenges/is-fibo
//
//Create By Hander

#include<stdio.h>
#define IS_FIBO "IsFibo"
#define IS_NOT_FIBO "IsNotFibo"

int main()
{
    //生成斐波那契表格
    long long int fib[56] = {0,1};
    for (int i = 2; i < 56; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    int T ;
    scanf("%d",&T);
    long long int N;
    while (T--) {
        scanf("%lld",&N);
        //查询表格
        for (int i = 2; i < 56; i++) {
            if (fib[i] < N ) {
                continue;
            } else if (fib[i] == N){
                printf("%s\n",IS_FIBO);
                break;
            } else {
                printf("%s\n",IS_NOT_FIBO);
                break;
            }
        }
    }
    return 0;
}