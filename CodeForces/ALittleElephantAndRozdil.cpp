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
    int cities; cin>>cities;
    int times[cities];
    for ( int i =0 ; i < cities; i++) {
        cin>>times[i];
    }
    int mindistance = INFINITY;
    int minindex = 0;
    int mincounts=0;
    for ( int i =0; i < cities; i++) {
        if (times[i] < mindistance) {
            mindistance=times[i];
            minindex=i;
        }
    }
    for (int i =0; i < cities; i++) {
        if (times[i] == mindistance) {
            mincounts++;
        }
    }
    if (mincounts>1) {
        cout<<"Still Rozdil";
    } else {
        cout<<minindex+1;
    }
    
}