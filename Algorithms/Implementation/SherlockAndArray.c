//Sherlock and Array
//https://www.hackerrank.com/challenges/sherlock-and-array
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T ;
    scanf("%d",&T );
    while (T--) {
        int N;
        scanf("%d",&N );
        int A[N];
        for (int i = 0 ; i < N ; i++) {
            scanf("%d",&A[i]);
        }
        int left = 0 , right = N - 1;
        long long int leftSum = 0 , rightSum = 0;
        while (left < right) {
            if (leftSum <= rightSum) {
                leftSum += A[left++];
            } else {
                rightSum += A[right--];
            }
        }
        if (leftSum == rightSum) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}