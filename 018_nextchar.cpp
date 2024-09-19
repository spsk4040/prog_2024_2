//
//  018_nextchar.cpp
//  c_w
//
//  Created by 이범수 on 9/10/24.
//

#include <stdio.h>
int main(){
    
    char c;
    printf("문자를 입력하시오: ");
    scanf("%c", &c);
    printf("%c\n", ++c);
}
