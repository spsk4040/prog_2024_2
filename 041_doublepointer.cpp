//
//  040_doublepointer2.cpp
//  c_w
//
//  Created by 이범수 on 10/8/24.
//

#include <stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    
    printf("1. a = %d\n", a);
    printf("2. &a = %p\n", &a);
    printf("3. ptr = %p\n", ptr); // 2-3은 같음
    printf("4. &ptr = %p\n", &ptr);
    printf("5. pptr = %p\n", pptr); // 4-5는 같음
    printf("6. *pptr = %p\n", *pptr); // 2번과 같음
    printf("7. **pptr = %d\n", **pptr); // 1번과 같은
}
