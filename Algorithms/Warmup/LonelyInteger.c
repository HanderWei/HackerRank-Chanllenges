//Lonely Integer
//https://www.hackerrank.com/challenges/lonely-integer
//
//
//Create By Hander
//

#include <stdio.h>
int lonelyinteger(int a_size, int* a) {
    int a_i , a_j;
    for (a_i = 0; a_i < a_size; a_i++) {
        a_j = 0;
        for (a_j = 0; a_j < a_size; a_j++)
            if (a_i != a_j && a[a_i] == a[a_j])
                break;
        if (a_j == a_size) {
            return a[a_i];
        }
    }
    return -1;
}

int main() {
    int res;
    
    int _a_size, _a_i;
    scanf("%d", &_a_size);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) {
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
    
    res = lonelyinteger(_a_size, _a);
    printf("%d", res);
    
    return 0;
}