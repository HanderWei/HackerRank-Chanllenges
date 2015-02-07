//Sherlock and Squares
//https://www.hackerrank.com/challenges/sherlock-and-squares
//
//Create By Hander

#include<stdio.h>
#include<math.h>

int main()
{
    long long int T , A , B ;
    scanf("%lld",&T );
    while (T--) {
        int res = 0 ;
        scanf("%lld %lld",&A ,&B );
        int i = 1;
        int square = pow(i , 2);
        while (square <= B) {
            if (square < A ) {
                
            }else if(A <= square <= B ){
                res++;
            }
            i++;
            square = pow(i , 2);
        }
        printf("%d\n",res);
    }
    return 0;
}