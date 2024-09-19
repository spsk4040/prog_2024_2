//
//  018_if.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(){
    
    int x;
    printf("숫자를 입력: ");
    scanf("%d", &x);
    
    if(x % 2 == 0){
        printf("%d는 짝수입니다.\n", x);
    } else{
        printf("%d는 홀수입니다.", x);
    }
    
}
