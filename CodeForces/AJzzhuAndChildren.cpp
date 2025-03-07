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
    int children; cin >> children;
    int candy; cin>>candy;
    int requiredCandies[children+1];
    vector<int> line;
    for ( int i = 1; i <= children; i ++) {
        cin>>requiredCandies[i];
        line.push_back(i);
    }

    int lastChild = -1;
    int i=0;
    while (children > 0) {
        if (children <=0) {
            break;
        }
        if (requiredCandies[line[i]] <= candy) {
            children--;
        } else {
            requiredCandies[line[i]]-=candy;
            line.push_back(line[i]);
        }
        lastChild = line[i];
        i++;
    }
    cout<<lastChild;
}