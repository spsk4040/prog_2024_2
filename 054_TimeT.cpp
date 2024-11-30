//
//  054_TimeT.cpp
//  C_ Project
//
//  Created by 이범수 on 11/5/24.
//

#include <stdio.h>

struct Time {
    int h, m, s;
    
};

int totalSec(Time t){ //Call-by-valse
    return t.h * 3600 + t.m * 60 + t.s;
}
int totalSecP(Time *t){ //Call-by-address
    return t->h * 3600 + t->m * 60 + t->s;
}

int main()
{
    Time t = {1, 22, 48};
    
    printf("%d\n", totalSec(t));
    printf("%d\n", totalSecP(&t));
}
