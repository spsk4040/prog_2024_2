//
//  024_while.cpp
//  c_w
//
//  Created by 이범수 on 9/11/24.
//

#include <stdio.h>
int main(){
    
    int i = 1;
    
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    
    //do - while
    
    int x = 1;
    
    
    do {
        printf("%d ", x);
        x++;
    } while (x <= 10);
    printf("\n");
}
