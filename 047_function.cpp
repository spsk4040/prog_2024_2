//
//  047_function.cpp
//  C_ Project
//
//  Created by 이범수 on 10/23/24.
//

#include <stdio.h>

int itemCnt = 0;
int money = 100;

void buyItem(int price, int cnt)
{
    if (money >= price){
        itemCnt +=cnt ;
        money -= price;
        printf("아이템을 구매했습니다.\n");
        printf("  아이템 개수: %d\n", itemCnt);
        printf("  잔액: %d\n", money);
    }else{
        printf("잔액이 부족합니다.\n");
    }
}

int plus(int a, int b)
{
    return a + b;
}

int main(){
    buyItem(30,3);
    buyItem(40,6);
    
    buyItem(50, 2);
    
    printf("\n");
    int sum = plus(3, 5);
    printf("%d\n", sum);
}
