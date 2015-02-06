//Game of Thrones 1
//https://www.hackerrank.com/challenges/game-of-thrones
//
//Create By Hander

#include<stdio.h>
#include<string.h>

int main()
{
    int count[26] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }, flag = 0;
    char str[100000];
    
    scanf("%s",str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        count[(str[i] - 97)]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            flag++;
        }
        if (flag > 1) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}