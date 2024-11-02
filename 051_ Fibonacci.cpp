//
//  051_Fibonacci.cpp
//  C_ Project
//
//  Created by 이범수 on 10/29/24.
//

#include <stdio.h>

int fibo(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    
    printf("n 입력 : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
}
