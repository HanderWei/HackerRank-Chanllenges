//Cut the sticks
//https://www.hackerrank.com/challenges/cut-the-sticks
//
//Create By Hander

#include<stdio.h>

int main()
{
    int n1 , n2 ;
    scanf("%d",&n1);
    n2 = n1;
    int a[n1];
    for (int i = 0; i < n1 ; i++) {
        scanf("%d",&a[i]);
    }
    while (n1) {
        int min = 1001 , res = 0;
        //找到最小值
        for (int i = 0; i < n2 ; i++) {
            if (a[i] != 0 && a[i] < min) {
                min = a[i];
            }
        }
        //将余下不为0的树枝减去最小值
        for (int i = 0; i < n2 ; i++) {
            if (a[i] == min) {
                n1--;
            }
            if (a[i] != 0) {
                res++;
                a[i] -= min;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}