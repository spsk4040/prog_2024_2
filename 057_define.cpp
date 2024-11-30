//
//  057_define.cpp
//  C_ Project
//
//  Created by 이범수 on 11/5/24.
//

#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int square(int x){
    return x * x;
}

int main(){
    int a = 5;
    
    printf("%d\n", SQUARE(a+1));    // 매크로
    printf("%d\n", square(a+1));    // 함수
    printf("%d\n", (a+1) * (a+1));  // 수식
    
    a = 4;
    printf("%d\n", 100/SQUARE(a+1)); // 매크로
    printf("%d\n", 100/square(a+1)); // 매크로
}
