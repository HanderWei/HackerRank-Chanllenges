//Utopian Tree
//https://www.hackerrank.com/challenges/utopian-tree
//
//Create By Hander

#include<stdio.h>

int getLength(int cycle)
{
    int length = 1;
    for (int i = 0 ; i < cycle; i++) {
        if (i % 2 == 0) {
            length *= 2;
        }else{
            length += 1;
        }
    }
    return length;
}

int main()
{
    int n , a;
    scanf("%d" , &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        printf("%d\n", getLength(a));
    }
    return 0;
}