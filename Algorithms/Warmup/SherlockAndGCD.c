//Sherlock and GCD
//https://www.hackerrank.com/challenges/sherlock-and-gcd
//
//Create By Hander

#include<stdio.h>

int gcd(int a , int b)
{
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c ;
    }
    return a;
}

int main()
{
    int T , N ;
    scanf("%d",&T );
    while (T--) {
        scanf("%d",&N);
        int a[N] , flag = 0;//flag == 1 表示存在满足条件的子集
        for (int i = 0; i < N ; i++) {
            scanf("%d",&a[i]);
        }
        if (N == 1) {//集合中只有一个元素
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < N ; i++) {
            for (int j = i + 1; j < N ; j++) {
                if(a[i] != a[j]){
                    if(gcd(a[i],a[j]) == 1){
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag) {
                printf("YES\n");
                break;
            }
        }
        if (!flag) {
            printf("NO\n");
        }
    }
    return 0;
}