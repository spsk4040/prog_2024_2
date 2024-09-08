//
//  worksheet_13.cpp
//  c_w
//
//  Created by 이범수 on 9/5/24.
//

#include <stdio.h>
int main(){
    
    float n;
    
    printf("점수를 입력하시오 : ");
    scanf("%f", &n);
    
    if (n >= 4.5){
        printf("A+\n");
    }else if (n >= 4.0){
        printf("A0\n");
    }else if (n >= 3.5){
        printf("B+\n");
    }else if (n >= 3.0){
        printf("B0\n");
    }else if (n >= 2.5){
        printf("C+\n");
    }else if (n >= 2.0){
        printf("C0\n");
    }else if (n >= 1.5){
        printf("D+\n");
    }else if (n >= 1.0){
        printf("D0\n");
    }else if(n >= 0.0){
        printf("F\n");
    }
    
}
