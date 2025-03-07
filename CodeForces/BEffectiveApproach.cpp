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
    int elemSize; cin>>elemSize;
    int elements[elemSize];
    long long leftRead = 0;
    long long rightRead = 0;
    vector<vector<int>> startEndPositions(elemSize+1, vector<int>(2, -1)); 
    for (int i =0; i < elemSize; i++) {
        int element;
        cin>>element;
        if (startEndPositions[element][0] == -1) {
            startEndPositions[element][0] = i;
        }
        startEndPositions[element][1]=i;
    }
    int querySize; cin>>querySize;
    int queries[querySize];
    for (int i=0; i < querySize; i++) {
        int query;
        cin>>query;
        leftRead+=startEndPositions[query][0]+1;
        rightRead+=(elemSize-startEndPositions[query][1]);
    }
    cout<<leftRead<<' '<<rightRead;
}