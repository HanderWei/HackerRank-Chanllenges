#include<stdio.h>

int main()
{
    int T, N, K, temp, sum;
    scanf("%d", &T);
    while(T--)
    {
	scanf("%d %d", &N, &K);
	sum = 0;
	while(N--)
	{
	    scanf("%d", &temp);
	    if(temp <= 0)
	    {
		sum++;
	    }
	}	
	if(sum < K){
	    printf("YES\n");
	} else {
	    printf("NO\n");
	}
    }
    return 0;
}
