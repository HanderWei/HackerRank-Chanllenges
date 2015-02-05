//Flipping Bits
//https://www.hackerrank.com/challenges/flipping-bits
//
//给你一个32-bits位无符号整数的列表，要求你输出你把它们中每个数二进制表示中的每位翻转之后的结果得到的新列表（即0变成1，1变成0）。
//
//
//Create By Hander

#include<stdio.h>
#include<stdint.h>

int main()
{
    int n;
    uint32_t a;
    scanf("%d",&n);
    for (int i = 0 ; i < n; i++) {
        scanf("%d",&a);
        printf("%u\n",~a);
    }
    return 0;
}