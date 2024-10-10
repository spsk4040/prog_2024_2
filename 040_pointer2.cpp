//
//  040_pointer2.cpp
//  c_w
//
//  Created by 이범수 on 10/8/24.
//

#include <stdio.h>
int main(){
    int a = 10;
    int b = 20;
    
    int *ptr = &a;
    printf("%p = %d\n", ptr, *ptr);
    
    ptr = &b;
    printf("%p = %d\n", ptr, *ptr);
}
