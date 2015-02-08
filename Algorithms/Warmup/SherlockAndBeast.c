//Sherlock and Beast
//https://www.hackerrank.com/challenges/sherlock-and-the-beast
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T , N ;
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&N);
        if (N < 3) {
            printf("-1\n");
            continue;
        }
        if (N % 3 == 0) {
            while (N--) {
                printf("5");
            }
            printf("\n");
            continue;
        }
        int div , rem , five , three;
        rem = N % 3;
        div = N / 3;
        if (rem == 1 && N >= 10) {
            three = 10;
        } else if (rem == 2 && N >= 5){
            three = 5;
        } else {
            printf("-1\n");
            continue;
        }
        five = N - three;
        while (five--) {
            printf("5");
        }
        while (three--) {
            printf("3");
        }
        printf("\n");
        continue;
    }
    return 0;
}