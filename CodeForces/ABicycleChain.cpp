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
    int ng; cin>>ng;
    int gears[ng];
    for(int i =0; i < ng; i++) {
        cin>>gears[i];
    }
    int nsets; cin>>nsets;
    int sets[nsets];
    for (int i =0; i < nsets; i++) {
        cin>>sets[i];
    }
    unordered_map<int,int> map;
    for ( int i = 0; i < ng; i++) {
        for (int j =0; j<nsets; j++) {
            int ratio = sets[j]/gears[i];
            if (sets[j]%gears[i]==0) {
                map[ratio]++;
            }
        }
    }
    int maxKey = 0;
    for (auto &[key,val]: map) {
        if (key > maxKey) {
            maxKey=key;
        }
    }
    cout<<map[maxKey];
}