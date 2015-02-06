//Angry Children
//https://www.hackerrank.com/challenges/angry-children
//
//Create By Hander

#include<stdio.h>
#include<stdlib.h>

#define MAX 100000
#define MAX_VAL 1000000001

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int N,K;
    
    scanf("%d",&N);
    scanf("%d",&K);
    
    int numbers[N];
    
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &numbers[i]);
    }
    
    //将数组排序
    qsort(numbers, N , sizeof(int) , compare);
    
    int unfairness = MAX_VAL;

    for (int i = K; i < N; i++){
        if (unfairness > numbers[i - 1] - numbers[i - K]){
            unfairness = numbers[i - 1] - numbers[i - K];
        }
    }
    
    printf("%d",unfairness);

    return 0;
}