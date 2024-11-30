//
//  062_rand.cpp
//  C_ Project
//
//  Created by 이범수 on 11/6/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    for (int i = 1; i <= 3; i++) {
        printf("%d\n", rand() % 6 + 1 );
    }
}
