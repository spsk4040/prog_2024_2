//
//  037_pointer.cpp
//  c_w
//
//  Created by 이범수 on 10/8/24.
//

#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    
    printf("%p = %p = %d\n", &a, ptr, a);
    
    *ptr = 20; 
}
