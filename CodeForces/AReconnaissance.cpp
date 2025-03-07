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
    int count; cin>>count;
    vector<int> units;
    for ( int i = 0; i < count; i++) {
        int value; cin>>value; 
        units.push_back(value);
    }
    int soldiers[2];
    int minDifference = INFINITY;
    for (int i=1; i < units.size(); i++) {
        if (i+1 == units.size() && abs(units[i]-units[0]) < minDifference) {
            soldiers[0]=i;
            soldiers[1]=0;
            continue;
        }
        if (abs(units[i]-units[i-1]) < minDifference) {
            minDifference = abs(units[i]-units[i-1]);
            soldiers[0]=i-1;
            soldiers[1]=i;
        }
    }
    cout<<soldiers[0]+1<<' '<<soldiers[1]+1;
}