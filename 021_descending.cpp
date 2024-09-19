//
//  021_descending.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(){
    
    int a, b, c;
    
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b){
        if (b > c){
            printf("%d %d %d\n", a, b, c); //a > b > c
        }else if (a > c){
            printf("%d %d %d\n", a, c, b); //a > c > b
        }else {
            printf("%d %d %d\n", c, a, b); //c > a > b
        }
    }
    if (a > c){
        printf("%d %d %d\n", b, a, c); //b > a > c
    }else if (b > c){
        printf("%d %d %d\n", b, c, a); //
    }else {
        printf("%d %d %d\n", c, b, a);
    }
}
