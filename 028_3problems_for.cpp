//
//  028_3problems_for.cpp
//  c_w
//
//  Created by 이범수 on 9/11/24.
//

// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다.


#include <stdio.h>
int main(){
    
    int n;
    
    printf("숫자를 입력하세요. : ");
    scanf("%d", &n);
    
// 1.
//    for (int i = 1; i <= n; i++) {
//        printf("* ");
//    }
//    printf("\n");

    
// 2.
//    for (int i = 1; i <= n; i++) {
//        if (i % 2 == 0) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
    
    
// 3.
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    
}
