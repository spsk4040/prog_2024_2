//
//  worksheet_07.cpp
//  c_w
//
//  Created by 이범수 on 9/5/24.
//

#include <stdio.h>
int main(void){
    float weight, height;
    
    printf("몸무게 : ");
    scanf("%f", &weight);
    
    printf("키: " );
    scanf("%f", &height);
    
    height /= 100;
    
    printf("BMI : %.1f\n", weight / (height * height));
    
    
    
    
    
}
