//
//  043_pointer.cpp
//  C_ Project
//
//  Created by 이범수 on 10/22/24.
//

#include <stdio.h>
int main()
{
    // 10개 짜리 정수 배열 선언
    int arr[10] = { 10, 20, 30, 40, 50, 60 ,70, 80, 90, 100 };
    
    int* p;
    
    p = arr; // 배열의 이름은 주소이기 때문에 대입 가능
    
    printf("%d\n", *p); // 주소의 저장된 값을 출력
    printf("%d %d\n", *(p+1), *p+1);
    
    printf("%p %p %p %p\n", arr, &arr[0], p + 1  , &arr[1]);
    printf("%p %p %p %p\n", p  , &p[0]  , arr + 1, &p[1]  );
    
    float f = 1.23;
    
}
