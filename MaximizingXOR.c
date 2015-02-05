//Maximizing XOR
//https://www.hackerrank.com/challenges/maximizing-xor
//
//Create By Hander

#include<stdio.h>

int main()
{
    int L , R , res = 0 , t;
    scanf("%d",&L);
    scanf("%d",&R);
    for (int i = L ; i <= R ; i++) {
        for(int j = L ; j <= R ; j++)
        {
            t = i ^ j;
            if (res < t) {
                res = t;
            }
        }
    }
    printf("%d",res);
    return 0;
}