//
//  044_arraypointer.cpp
//  C_ Project
//
//  Created by 이범수 on 10/22/24.
//

#include "044_arraypointer.hpp"
int main()
{
    int* p[10]; //포인터의 10개짜리 배열
    
    int (*q)[10]; //10개 원소를 갖는 정수 배열의 포인터
    
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    q = &a;
    
    int* ptr = a;
    
    printf("%p %p %p\n", q, q+1, ptr+1);
}
