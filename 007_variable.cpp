//
//  007_variable.c
//  c_w
//
//  Created by 이범수 on 9/4/24.
//

#include <stdio.h>
int main(void){
    int a;  // 변수의 선언

    a = 3;  // 값을 대입
    printf("a = %d\n", a);

    a = 5;
    printf("a = %d\n", a);

    int b = 5;  // 정수형 변수 b를
                // 선언하면서 5로 초기화했다

    printf("b = %d\n", b);

    printf("%d + %d = %d\n", a, b, a + b);

    int sum;
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}
