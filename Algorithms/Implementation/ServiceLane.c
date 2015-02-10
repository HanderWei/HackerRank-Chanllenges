//Service Lane
//https://www.hackerrank.com/challenges/service-lane
//
//Create By Hander

#include<stdio.h>

int main()
{
    int N , T ;
    scanf("%d %d",&N ,&T );
    int width[N];
    for (int i = 0; i < N ; i++) {
        scanf("%d",&width[i]);
    }
    while (T--) {
        int i , j , min = 3;
        scanf("%d %d",&i,&j);
        for (int k = i; k <= j; k++) {
            if (min > width[k]) {
                min = width[k];
            }
        }
        printf("%d\n",min);
    }
    return 0;
}