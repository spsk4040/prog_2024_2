//
//  060_getchar.cpp
//  C_ Project
//
//  Created by 이범수 on 11/6/24.
//

#include <stdio.h>

int main()
{
    char ch;
    
//    ch = getchar();
//    putchar(ch);
//    printf("\n");
    
    while (true) {
        ch = getchar();
        if (ch == '\n')
            break;
        putchar(ch);
    }
    printf("\n");
}
