//
//  049_p.cpp
//  C_ Project
//
//  Created by 이범수 on 10/29/24.
//

#include <stdio.h>

int factorial(int n){
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{
    int n;
    
    printf("n입력 : ");
    scanf("%d", &n);
    
    // 1. 0부터 100까지 합을 구하기
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = i;
    }
    printf("%d\n", sum);
    
    // 1부터 n까지를 곱한다.
    int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
    }
    printf("%d\n", p);
    
    printf("%d\n", factorial(n));
}
