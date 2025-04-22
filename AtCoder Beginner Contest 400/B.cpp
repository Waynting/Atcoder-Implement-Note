/*
#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main(){
    long a =0, b =0;
    cin >> a >> b;
    long sum =0;
    sum = (pow(a,b+1)-1)/(a-1);
    if(sum > pow(10,9) || sum < 0 ){
        cout<< "inf";
    }
    else{
        cout << sum;
    }
}
*/

//Answer
#include<iostream>
using namespace std;

int main(){
    long N, M;
    cin >> N >> M;

    long sum = 0;
    long current = 1;  // 初始化當前項目為 N^0 = 1
    for (int i = 0; i <= M; i++) {
        sum += current;
        
        // 若 sum 超過 10^9，就輸出 "inf"
        if (sum > 1000000000) {
            cout << "inf";
            return 0;
        }
        
        current *= N;  // 下一項是 N 的 i+1 次方
    }

    cout << sum;  // 若 sum 沒有超過 10^9，則輸出 sum
    return 0;
}
