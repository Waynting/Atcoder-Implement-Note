#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    long long N =0;
    cin >> N;
    // b use try;
    vector<long long> appear;

    int ansNum =0;
    for(long long i=1;i<sqrt(N);i= i+1){
        int twoIndex = 1;
        while(pow(2,twoIndex) <= N /pow(i,2) ){
            long long temp = pow(i,2) * pow(2,twoIndex);
            vector<long long>::iterator it = std::find(appear.begin(), appear.end(), temp);
            if(it == appear.end() ){
                appear.push_back(temp);
                ansNum++;
            }
            twoIndex++;

        }
    }

    cout << ansNum;
}
