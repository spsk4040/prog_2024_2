//
//  050_printArr.cpp
//  C_ Project
//
//  Created by 이범수 on 10/29/24.
//

#include <stdio.h>

void printArr(int a[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void print2dArr(int a[][4], int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[] = {1,2,3,4,5};
    int b[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    
    printArr(a, 5);
    
    printf("\n");
    print2dArr(b, 3);
}
