//
//  016_rogicalOp.cpp
//  c_w
//
//  Created by 이범수 on 9/4/24.
//

#include <stdio.h>
int main(void){
    int a = 3;
    
    bool p = a >= 1 && a <= 10;
    bool q = a == 3 && a == 7;
    bool r = !q;
    
    printf("%d %d %d\n", p, q, r );
    
}
