#include<iostream>
using namespace std;
int main(){
    int a =0;
    cin >> a;
    if(400 % a != 0){
        cout << "-1";
    }
    else{
        cout << 400/a;
    }
}