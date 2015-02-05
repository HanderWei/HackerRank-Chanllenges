//Solve Me Second
//https://www.hackerrank.com/challenges/solve-me-second
//
//read T
//loop from 1 to T
//read A and B
//compute the sum
//print value in a newline
//end loop
//
//Create by Hander
//

#include<stdio.h>

int main()
{
    int t , a , b;
    scanf("%d\n",&t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d",&a ,&b);
        printf("%d\n",a + b);
    }
    return 0;
}