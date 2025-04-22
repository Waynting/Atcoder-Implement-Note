#include<iostream>
#include<cmath>
#include<vector>
#include <algorithm>
using namespace std;

struct coordinate{
    int x;
    int y;
};

int distance(coordinate now, coordinate goal){
    return abs(now.x - goal.x) + abs(now.y - now.y) ;
}



int main(){

    int mapH = 0, mapW = 0;
    cin >> mapH >> mapW;
    char Map[mapH][mapW];
    for(int i=0;i<mapH;i++){
        for(int j=0;j<mapW;j++){
            cin >> Map[i][j];
        }
    }
    coordinate start, destination;
    cin >> start.x >> start.y;
    cin >> destination.x >> destination.y;


    return 0;

}
