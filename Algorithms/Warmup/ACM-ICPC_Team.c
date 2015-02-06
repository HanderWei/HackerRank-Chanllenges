//ACM-ICPC Team
//https://www.hackerrank.com/challenges/acm-icpc-team
//
//Create By Hander

#include<stdio.h>

int main()
{
    //N个人，M道题
    int N , M , max = -1 , count = 0;
    scanf("%d %d", &N , &M );
    char strs[N][M+1];//注意保留'\0'
    for (int i = 0; i < N ; i++) {
        scanf("%s",strs[i]);
    }
    for (int i = 0; i < N ; i++) {
        for (int j = i + 1 ; j < N ; j++) {
            int res = 0;
            for (int k = 0; k < M ; k++) {
                if (strs[i][k] == 49 || strs[j][k] == 49) {
                    res++;
                }
            }
            if (max < res) {
                max = res;
                count = 1 ;
            }else if (max == res) {
                count++;
            }
        }
    }
    printf("%d\n",max);
    printf("%d\n",count);
    return 0;
}