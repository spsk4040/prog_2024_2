//
//  worksheet_11.cpp
//  c_w
//
//  Created by 이범수 on 9/5/24.
//

#include <stdio.h>
int main(void){
    
    int x = 3, y = 4;
    
    printf("x && y = %d\n", bool(x && y));
    printf("x && y = %d\n", bool(x || y));
    printf("!x = %d\n", bool(!x));
    printf("!y = %d\n", bool(!y));
}
