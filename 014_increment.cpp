//
//  014_ increment.c
//  c_w
//
//  Created by 이범수 on 9/4/24.
//

#include <stdio.h>
int main(void){
    int a = 5;
    int b;
    
    b = ++a;
    printf("a=%d, b=%d\n", a, b);
    
    b = a++;
    printf("a=%d b=%d\n", a, b);
    
}
