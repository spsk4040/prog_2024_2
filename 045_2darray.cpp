//
//  045_2darray.cpp
//  C_ Project
//
//  Created by 이범수 on 10/22/24.
//

#include <stdio.h>
int main()
{
    int a[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    
    printf("%d\n", &a[0]);
    printf("%d\n", a);
    printf("%d\n", &a[1]);
    printf("%d\n", a+1);
    printf("%d\n", &a[0]+1);
    
    int (*p)[4] = &a[0];
    
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 4; i++) {
            printf("%4d", (*(p+j))[i]);
        }
        printf("\n");
    }
    
}
