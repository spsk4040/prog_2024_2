//
//  008_arithmetic.c
//  c_w
//
//  Created by 이범수 on 9/4/24.
//

#include <stdio.h>
int main(void){
    //int a = 5;
    //int b = 3;
    //int sum = a + b;
    //int sub = a - b;
    //int mul = a * b;
    //int div = a / b;
    //int mod = a % b;

    //printf("%d + %d = %d\n", a, b, sum);
    //printf("%d - %d = %d\n", a, b, sub);
    //printf("%d * %d = %d\n", a, b, mul);
    //printf("%d / %d = %d\n", a, b, div);
    //printf("%d %% %d = %d\n", a, b, mod);

    float a = 9.8;
    float b = 3.14;
    float sum = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = a / b;
    // float mod = a % b;
    // C언어는 float의 나머지 연산이 없다

    printf("%f + %f = %f\n", a, b, sum);
    printf("%f - %f = %f\n", a, b, sub);
    printf("%f * %f = %f\n", a, b, mul);
    printf("%f / %f = %f\n", a, b, div);
}
