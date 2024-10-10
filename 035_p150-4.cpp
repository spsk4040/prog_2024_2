//
//  035_p150-4.cpp
//  c_w
//
//  Created by 이범수 on 9/25/24.
//

#include <stdio.h>
int main(){
    
    int a[10][10];
    
    int x, y;
    
    printf("행과 열의 숫자를 입력: ");
    scanf("%d %d", &x, &y);
    
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    
    //각 행의 합을 구하여 출력
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int j = 0; j < y; j++) {
            sum += a[i][j];
        }
        printf("%d\n", sum);
    }

}
