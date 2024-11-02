//
//  052_struct.cpp
//  C_ Project
//
//  Created by 이범수 on 10/30/24.
//

#include <stdio.h>

int main()
{
    struct {float x, y; } pos;
    
    pos.x = 1.5;
    pos.y = 2.2;
    
    printf("좌표 : (%.1f, %.1f)\n", pos.x, pos.y);
}
