//
//  worksheet_14.cpp
//  c_w
//
//  Created by 이범수 on 9/6/24.
//

#include <stdio.h>
int main(){
    
    int n;
    
    printf("점수를 입력하시오 : ");
    scanf("%d", &n);
    
    switch (n) {
        case 100:
            printf("A+\n");
            break;
        case 95:
            printf("A0\n");
            break;
        case 90:
            printf("B+\n");
            break;
        case 85:
            printf("B0\n");
            break;
        case 80:
            printf("C+\n");
            break;
        case 75:
            printf("C0\n");
            break;
        case 70:
            printf("D+\n");
            break;
        case 65:
            printf("D0\n");
            break;
        default:
            printf("F\n");
            break;
    }
    
}
