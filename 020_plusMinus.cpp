//
//  020_plusMinus.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(){
    
    int n;
    
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);
    
    if(n > 0){
        printf("%d는 양수입니다.\n", n);
    } else if(n < 0) {
        printf("%d는 음수입니다.\n", n);
    } else{
        printf("%d는 0입니다.\n", n);
    }
}
