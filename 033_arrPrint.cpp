//
//  033_arrPrint.cpp
//  c_w
//
//  Created by 이범수 on 9/24/24.
//

#include <stdio.h>
int main(){
    
    int a[1000] = {0};
    int n;
    
    printf("입력 숫자의 개수 : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("숫자 입력 : ");
        scanf("%d", &a[i]);
        
    }
    
    // 앞에서부터 출력
//    for (int j = 0; j < n; j++) {
//        printf("%d ", a[j]);
//    }
//    printf("\n");
    
    //뒤에서부터 출력
//    for (int k = n-1; k >= 0; k--) {
//        printf("%d ", a[k]);
//    }
//    printf("\n");
//    
    // 최대값 찾기
    
    int max = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("max = %d\n", max);
}
