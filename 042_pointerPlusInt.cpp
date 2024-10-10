//
//  042_pointerPlusInt.cpp
//  c_w
//
//  Created by 이범수 on 10/8/24.
//

#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1); //int 크기가 4바이트라 4가 더해짐
    printf("ptr + 2 = %p\n", ptr + 4);
    
}
