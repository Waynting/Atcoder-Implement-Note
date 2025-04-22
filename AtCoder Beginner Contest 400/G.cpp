#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main(){
    int taskamount;
    cin >> taskamount;
    for(int a = 0; a < taskamount;a++){

        int stackamount, cakamount;
        cin >> stackamount >> cakamount;

        int mapi[stackamount][cakamount];
        for(int i=0;i<stackamount;i++){
            for(int j=0;j<cakamount;j++){
                cin >> mapi[i][j];
            }
        }
    }




}
