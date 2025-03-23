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

void pNums (int n) {
    for (int i =0; i<n*2+1; i++) {
        if (i<n+1) {
            cout<<i;
        } else {
            cout<<n*2-i;
        }
        if (i<n*2) {
            cout<<' ';
        }
    }
}

void pSpace (int n, int row) {
    int totalValues = 2*n+1;
    int emptySpaces = totalValues-row*2-1;
    for (int i = 0; i < emptySpaces; i++) { 
        cout<<' ';
    }
    pNums(row);
}

int main() {
    int n; cin>>n;
    vector<vector<int>> handkerchief(n*2+1, vector<int>(n*2+1, -1));
    int counter =0;
    for (int i = 0; i <= n; i++) {
        pSpace(n,i);
        cout<<'\n';
    }
    for ( int i =n; i < 2*n; i++) {
        pSpace(n,2*n-1-i);
        cout<<'\n';
    }
}
