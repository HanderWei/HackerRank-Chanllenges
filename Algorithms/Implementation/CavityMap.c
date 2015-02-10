//Cavity Map
//https://www.hackerrank.com/challenges/cavity-map
//
//Create By Hander

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char map[n][n];
    char str[n + 1];
    for (int i = 0 ; i < n ; i++) {
        scanf("%s",str);
        for (int j = 0; j < n ; j++) {
            map[i][j] = str[j];
        }
    }
    for (int i = 1 ; i < n-1 ; i++) {
        for (int j = 1 ; j < n-1; j++) {
            if (map[i][j] > map[i - 1][j] && map[i][j] > map[i + 1][j] && map[i][j] > map[i][j - 1] && map[i][j] > map[i][j + 1]) {
                map[i][j] = 'X';
            }
        }
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
}