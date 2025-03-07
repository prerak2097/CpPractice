#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;

int main() {
    int points; cin>>points;
    vector<vector<int>> pointVector(points, vector<int>(2));
    for (int i =0; i < points; i++) {
        int x; cin>>x;
        int y; cin>>y;
        pointVector[i][0]=x;
        pointVector[i][1]=y;
    }

    int output =0;
    for (int i =0; i < points; i++) {
        int ix=pointVector[i][0];
        int iy = pointVector[i][1];
        bool isLeft =false;
        bool isRight = false;
        bool isUp = false;
        bool isDown = false;
        for (int j =0; j<pointVector.size(); j++) {
            int jx=pointVector[j][0];
            int jy = pointVector[j][1];
            if (jx>ix && jy==iy) {
                isRight=true;
            }
            else if (jx<ix && jy==iy) {
                isLeft=true;
            }
            else if (jx==ix && jy<iy) {
                isDown=true;
            }
            else if (jx==ix && jy>iy) {
                isUp=true;
            }
        }
        if (isLeft && isRight && isUp && isDown) {
            output++;
        }
    }
    cout<<output;
}