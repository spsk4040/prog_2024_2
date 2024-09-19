//
//  025_dowhile.cpp
//  c_w
//
//  Created by 이범수 on 9/11/24.
//

// 0을 입력할 때 까지 입력한 숫자를 출력해라.

#include <stdio.h>
int main(){
    
    int n;
    
    do {
        printf("0을 입력하세요.\n");
        scanf("%d", &n);
        
    } while (n != 0);
    
}
