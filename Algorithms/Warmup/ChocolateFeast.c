//Chocolate Feast
//https://www.hackerrank.com/challenges/chocolate-feast
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T , N , C , M ;
    scanf("%d", &T );
    while (T--) {
        int res = 0 , temp , rem;
        scanf("%d %d %d", &N , &C , &M );
        res = N / C ;
        temp = res;
        rem = 0;
        while (temp / M > 0) {
            rem = temp % M ;
            res += temp / M ;
            temp = temp / M + rem ;
            //printf("res:%d temp:%d rem:%d\n", res , temp , rem );
        }
        printf("%d\n",res);
    }
    return 0;
}