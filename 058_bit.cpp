//
//  058_bit.cpp
//  C_ Project
//
//  Created by 이범수 on 11/5/24.
//

#include <stdio.h>
int main()
{
    
    int a = 5;
    int b = 4;
    
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);
    printf("a << 2 = %d\n", a << 2);
    printf("a >> 2 = %d\n", a >> 2);
    
    // a &= b;
    // masking
    int x = 106;   // 0110 1010
    int mask = 15; // 0000 1111
    x &= mask;
    printf("%d\n", x);
}
