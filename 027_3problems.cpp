//
//  026_3problems.cpp
//  c_w
//
//  Created by 이범수 on 9/11/24.
//

// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 출력한다
// 3. 1부터 n까지 자연수를 모두 더한다.


#include <stdio.h>
int main(){
    
    // while 문
    int i = 0, n;
    
    printf("숫자를 입력하세요. : ");
    scanf("%d", &n);
    
//    while (true) {
//        printf("* ");
//        i++;
//        if (i >= n) {
//            break;
//        }
//    }
//    printf("\n");
//    
    
// 2.
//    i = 1;
//    
//    while (i <= n) {
//        if (i % 2 == 0) {
//            printf("%d ", i);
//        }
//        i++;
//    }
//    printf("\n");
    
    
    int sum = 0;
    i = 1;
    
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    
    
    
}
