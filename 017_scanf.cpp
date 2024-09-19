//
//  017_scanf.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(void){
    
    int a, b;
    
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("두개의 정수 : %d %d\n", a, b);
    getchar(); //글자 하나를 읽어내는 함수
    
    char c;
    printf("한개의 문자를 입력하세요: ");
    scanf("%c", &c);
    printf("문자 : %c\n", c);
    
    float f;
    printf("한개의 실수를 입력하세요: ");
    scanf("%f", &f);
    printf("문자 : %f\n", f);
    
    double d;
    printf("한개의 배정도 실수를 입력하세요: ");
    scanf("%lf", &d); //double = %lf long float
    printf("문자 : %lf\n", d); //출력은 f도 괜찮음 입력은 반드시 lf
    	
    
}
