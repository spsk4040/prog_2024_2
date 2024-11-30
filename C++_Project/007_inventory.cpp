//
//  inventory.cpp
//  c++_project
//
//  Created by 이범수 on 11/12/24.
//

#include <iostream>
using namespace std;

int inventory[8] = {0};
int score = 0;

void getItme(int itemId, int cnt = 1, int sc = 0){
    inventory[itemId] += cnt;
    score += sc;
}

int main()
{
    getItme(6, 5);
    getItme(3);
    getItme(5, 4, 7000);
    
    for (int i : inventory){
        cout << i << " ";
    }
    cout << endl;
    cout << "점수 : " << score << endl;
}
