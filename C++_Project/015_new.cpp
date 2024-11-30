//
//  015_new.cpp
//  c++_project
//
//  Created by 이범수 on 11/20/24.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    // 합과 가장 큰 값을 출력(sum, max)
    int sum = 0;
    
    
    cout << "몇게의 데이터? : ";
    cin >> n;
    
    int* a = new int[n];            // 동적 메모리 할당
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    int max = a[0];
    
    for (int i = 1; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//        
//    }
    cout << endl;
    
    cout << "합 : " << sum << endl << "가장 큰 값 : " << max << endl;
    delete[] a;                       // 메모리 해제(반납)
}
