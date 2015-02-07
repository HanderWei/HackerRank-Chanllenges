//Manasa and Stones
//https://www.hackerrank.com/challenges/manasa-and-stones
//
//Create By Hander

#include<stdio.h>

int main()
{
    int T , n , a , b;
    scanf("%d",&T);
    while (T--) {
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        if (b == a) {
            printf("%d\n",(n - 1) * a);
            continue;
        }else if(b < a) {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int i = 0; i < n ; i++) {
            printf("%d ",a * (n - i - 1) + b * i);
        }
        printf("\n");
    }
    return 0;
}